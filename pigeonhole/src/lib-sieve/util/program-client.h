/* Copyright (c) 2002-2015 Pigeonhole authors, see the included COPYING file
 */

#ifndef __PROGRAM_CLIENT_H
#define __PROGRAM_CLIENT_H

struct program_client;

struct program_client_settings {
	unsigned int client_connect_timeout_msecs;
	unsigned int input_idle_timeout_secs;

	uid_t uid;
	gid_t gid;

	unsigned int debug:1;
	unsigned int drop_stderr:1;
};

typedef void program_client_fd_callback_t
	(void *context, struct istream *input);

struct program_client *program_client_local_create
	(const char *bin_path, const char *const *args,
		const struct program_client_settings *set);
struct program_client *program_client_remote_create
	(const char *socket_path, const char *const *args,
		const struct program_client_settings *set, bool noreply);

void program_client_destroy(struct program_client **_pclient);

void program_client_set_input
	(struct program_client *pclient, struct istream *input);
void program_client_set_output
	(struct program_client *pclient, struct ostream *output);

void program_client_set_output_seekable
	(struct program_client *pclient, const char *temp_prefix);
struct istream *program_client_get_output_seekable
	(struct program_client *pclient);

/* Program provides side-channel output through an extra fd */
void program_client_set_extra_fd
	(struct program_client *pclient, int fd,
		program_client_fd_callback_t *callback, void *context);
#define program_client_set_extra_fd(pclient, fd, callback, context) \
	program_client_set_extra_fd(pclient, fd + \
		CALLBACK_TYPECHECK(callback, \
			void (*)(typeof(context), struct istream *input)), \
		(program_client_fd_callback_t *)callback, context)

void program_client_set_env
	(struct program_client *pclient, const char *name, const char *value);

int program_client_run(struct program_client *pclient);

#endif

