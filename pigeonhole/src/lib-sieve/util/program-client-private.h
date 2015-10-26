/* Copyright (c) 2002-2015 Pigeonhole authors, see the included COPYING file
 */

#ifndef __PROGRAM_CLIENT_PRIVATE_H
#define __PROGRAM_CLIENT_PRIVATE_H

#include "program-client.h"

enum program_client_error {
	PROGRAM_CLIENT_ERROR_NONE,
	PROGRAM_CLIENT_ERROR_CONNECT_TIMEOUT,
	PROGRAM_CLIENT_ERROR_RUN_TIMEOUT,
	PROGRAM_CLIENT_ERROR_IO,
	PROGRAM_CLIENT_ERROR_UNKNOWN
};

struct program_client_extra_fd {
	struct program_client *pclient;

	int child_fd, parent_fd;
	struct istream *input;
	struct io *io;

	program_client_fd_callback_t *callback;
	void *context;
};

struct program_client {
	pool_t pool;
	struct program_client_settings set;

	char *path;
	const char **args;
	ARRAY_TYPE(const_string) envs;

	int fd_in, fd_out;
	struct io *io;
	struct ioloop *ioloop;
	struct timeout *to;
	time_t start_time;

	struct istream *input, *program_input, *seekable_output;
	struct ostream *output, *program_output;
	char *temp_prefix;

	ARRAY(struct program_client_extra_fd) extra_fds;

	enum program_client_error error;
	int exit_code;

	int (*connect)(struct program_client *pclient);
	int (*close_output)(struct program_client *pclient);
	int (*disconnect)(struct program_client *pclient, bool force);
	void (*failure)
		(struct program_client *pclient, enum program_client_error error);
	
	unsigned int debug:1;
	unsigned int disconnected:1;
	unsigned int output_seekable:1;
};

void program_client_init
	(struct program_client *pclient, pool_t pool, const char *path,
		const char *const *args, const struct program_client_settings *set);

void program_client_init_streams(struct program_client *pclient);

int program_client_connected(struct program_client *pclient);

void program_client_fail
	(struct program_client *pclient, enum program_client_error error);

#endif

