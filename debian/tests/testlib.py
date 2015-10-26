'''Common classes and functions for package tests.'''

import string, random, crypt, subprocess, pwd, signal, time

class TimedOutException(Exception):
    def __init__(self, value = "Timed Out"):
        self.value = value
    def __str__(self):
        return repr(self.value)

def timeout(secs, f, *args):
    def handler(signum, frame):
        raise TimedOutException()
    
    old = signal.signal(signal.SIGALRM, handler)
    result = None
    signal.alarm(secs)
    try:
        result = f(*args)
    finally:
        signal.alarm(0)
        signal.signal(signal.SIGALRM, old)

    return result

def random_string(length):
    '''Return a random string, consisting of ASCII letters, with given
    length.'''

    s = ''
    maxind = len(string.letters)-1
    for l in range(length):
        s += string.letters[random.randint(0, maxind)]
    return s

def login_exists(login):
    '''Checks whether the given login exists on the system.'''

    try:
        pwd.getpwnam(login)
        return True
    except KeyError:
        return False

def cmd(command, input = None, stderr = subprocess.STDOUT):
    '''Try to execute given command (array) and return its stdout, or return
    a textual error if it failed.'''

    try:
       sp = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=stderr, close_fds=True)
    except OSError, e:
        return [127, str(e)]

    out = sp.communicate(input)[0]
    return [sp.returncode,out]

class TestUser:
    '''Create a temporary test user and remove it again in the dtor.'''

    def __init__(self, login=None, home=True):
        '''Create a new user account with a random password. 
        
        By default, the login name is random, too, but can be explicitly
        specified with 'login'. By default, a home directory is created, this
        can be suppressed with 'home=False'.'''

        self.login = None

        if login:
            if login_exists(login):
                raise ValueError, 'login name already exists'
        else:
            while(True):
                login = random_string(8)
                if not login_exists(login):
                    break

        self.salt = random_string(2)
        self.password = random_string(8)
        self.crypted = crypt.crypt(self.password, self.salt)

        if home:
            assert subprocess.call(['useradd', '-p', self.crypted, '-m', login]) == 0
        else:
            assert subprocess.call(['useradd', '-p', self.crypted, login]) == 0

        self.login = login
        p = pwd.getpwnam(self.login)
        self.uid = p[2]
        self.gid = p[3]

    def __del__(self):
        '''Remove the created user account.'''

        if self.login:
            # seems to already have gone here
            try:
                import subprocess
            except:
                pass
            assert subprocess.call(['userdel', '-r', self.login]) == 0
