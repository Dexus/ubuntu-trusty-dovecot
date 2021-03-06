#ifndef CLIENT_H
#define CLIENT_H

#include "net.h"
#include "lmtp-client.h"

#define CLIENT_MAIL_DATA_MAX_INMEMORY_SIZE (1024*128)

struct mail_recipient {
	struct client *client;

	const char *address;
	const char *detail; /* +detail part is also in address */
	struct lmtp_recipient_params params;

	struct anvil_query *anvil_query;
	struct mail_storage_service_user *service_user;
	unsigned int parallel_count;
};

struct client_state {
	const char *name;
	const char *session_id;
	const char *mail_from;
	ARRAY(struct mail_recipient *) rcpt_to;
	unsigned int rcpt_idx;

	unsigned int anvil_queries;
	bool anvil_pending_data_write;

	unsigned int data_end_idx;

	/* Initially we start writing to mail_data. If it grows too large,
	   start using mail_data_fd. */
	buffer_t *mail_data;
	int mail_data_fd;
	struct ostream *mail_data_output;
	const char *added_headers;

	struct timeval mail_from_timeval, data_end_timeval;

	struct mail *raw_mail;

	struct mail_user *dest_user;
	struct mail *first_saved_mail;

	unsigned int mail_body_7bit:1;
	unsigned int mail_body_8bitmime:1;
};

struct client {
	struct client *prev, *next;
	pool_t pool;

	const struct setting_parser_info *user_set_info;
	const struct lda_settings *unexpanded_lda_set;
	const struct lmtp_settings *lmtp_set;
	const struct master_service_settings *service_set;
	int fd_in, fd_out;
	struct io *io;
	struct istream *input;
	struct ostream *output;
	struct ssl_iostream *ssl_iostream;

	struct timeout *to_idle;
	time_t last_input;

	struct ip_addr remote_ip, local_ip;
	in_port_t remote_port, local_port;

	struct mail_user *raw_mail_user;
	const char *my_domain;
	char *lhlo;

	pool_t state_pool;
	struct client_state state;
	struct istream *dot_input;
	struct lmtp_proxy *proxy;
	unsigned int proxy_ttl;
	unsigned int proxy_timeout_secs;

	unsigned int disconnected:1;
};

extern unsigned int clients_count;

struct client *client_create(int fd_in, int fd_out,
			     const struct master_service_connection *conn);
void client_destroy(struct client *client, const char *prefix,
		    const char *reason) ATTR_NULL(2, 3);
void client_disconnect(struct client *client, const char *prefix,
		       const char *reason);
void client_io_reset(struct client *client);
void client_state_reset(struct client *client, const char *state_name);
void client_state_set(struct client *client, const char *name, const char *args);
const char *client_remote_id(struct client *client);

void client_input_handle(struct client *client);
int client_input_read(struct client *client);

void client_send_line(struct client *client, const char *fmt, ...)
	ATTR_FORMAT(2, 3);
bool client_is_trusted(struct client *client);

void clients_destroy(void);

#endif
