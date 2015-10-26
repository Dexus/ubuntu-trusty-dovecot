#!/usr/bin/python
'''
    Packages required: dovecot-imapd dovecot-pop3d
'''

import subprocess, shutil, grp, os, os.path, sys, time

class Dovecot:
    def get_mailbox(self):
        return self.mailbox

    def __init__(self,user,config=None):
        '''Create test scenario.

        dovecot is configured for all protocols (imap[s] and pop3[s]), a test
        user is set up, and /var/mail/$user contains an unread and a read mail.
        '''

        self.old_version = False
        if config == None:
            if file("/etc/dovecot/dovecot.conf","r").read().find('auth_mechanisms = plain')>0:
                # Old dovecot
                config='''
protocols = imap imaps pop3 pop3s
login = imap
login = pop3
mail_extra_groups = mail

auth = auth-cram
auth_mechanisms = cram-md5
auth_passdb = passwd-file /etc/dovecot/test.passwd
auth_user = root

auth = auth-plain
auth_mechanisms = plain
auth_passdb = pam
auth_user = root

'''
                self.old_version = True
            else:
                # Modern dovecot
                config='''
protocols = imap imaps pop3 pop3s
log_timestamp = "%Y-%m-%d %H:%M:%S "
mail_extra_groups = mail
protocol imap {
}
protocol pop3 {
  pop3_uidl_format = %08Xu%08Xv
}
auth default {
  mechanisms = plain cram-md5
  passdb passwd-file {
    args = /etc/dovecot/test.passwd
  }
  passdb pam {
  }
  userdb passwd {
  }
  user = root
}
'''

        # make sure that /etc/inetd.conf exists to avoid init script errors
        self.created_inetdconf = False
        if not os.path.exists('/etc/inetd.conf'):
            open('/etc/inetd.conf', 'a')
            self.created_inetdconf = True

        # configure and restart dovecot
        if not os.path.exists('/etc/dovecot/dovecot.conf.autotest'):
            shutil.copyfile('/etc/dovecot/dovecot.conf', '/etc/dovecot/dovecot.conf.autotest')
        cfgfile = open('/etc/dovecot/dovecot.conf', 'w')
        cfgfile.write(config)
        cfgfile.close()

        file('/etc/dovecot/test.passwd','w').write('%s:{plain}%s\n' % (user.login, user.password) )

        # restart will fail if dovecot is not already running
        subprocess.call(['/etc/init.d/dovecot', 'stop'], stdout=subprocess.PIPE)
        assert subprocess.call(['/etc/init.d/dovecot', 'start'], stdout=subprocess.PIPE, stderr=subprocess.STDOUT) == 0

        # create test mailbox with one new and one old mail
        self.mailbox = '/var/mail/' + user.login
        self.orig_mbox = \
'''From test1@test1.com Fri Nov 17 02:21:08 2006
Date: Thu, 16 Nov 2006 17:12:23 -0800
From: Test User 1 <test1@test1.com>
To: Dovecot tester <dovecot@test.com>
Subject: Test 1
Status: N

Some really important news.

From test2@test1.com Tue Nov 28 11:29:34 2006
Date: Tue, 28 Nov 2006 11:29:34 +0100
From: Test User 2 <test2@test2.com>
To: Dovecot tester <dovecot@test.com>
Subject: Test 2
Status: R

More news.

Get cracking!
'''
        open(self.mailbox, 'w').write(self.orig_mbox)
        os.chown(self.mailbox, user.uid, grp.getgrnam('mail')[2])
        os.chmod(self.mailbox, 0660)

    def __del__(self):
        # restore original configuration and restart dovecot
        os.rename('/etc/dovecot/dovecot.conf.autotest', '/etc/dovecot/dovecot.conf')
        # quiesce, default configuration has no protocols
        subprocess.call(['/etc/init.d/dovecot', 'restart'], stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        if self.created_inetdconf:
            os.unlink('/etc/inetd.conf')

    def get_ssl_fingerprint(self):
        pem = '/etc/ssl/certs/dovecot.pem'
        if not os.path.exists(pem):
            pem = '/etc/ssl/certs/ssl-cert-snakeoil.pem'
        
        sp = subprocess.Popen(['openssl','x509','-in',pem,'-noout','-md5','-fingerprint'], stdout=subprocess.PIPE, stderr=subprocess.STDOUT, close_fds=True)
        return sp.communicate(None)[0].split('=',1)[1].strip()
        
