#ifndef _SOCKETS_H_
#define _SOCKETS_H_
#include <signal.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/stat.h>
/* #include <stropts.h> */
/* #include <poll.h> */
#include <sys/types.h>
#include <sys/time.h>
#include "sockutil.h"
#include "socket_tokens.h"
void check_io_signal_using_poll();
void check_io_signal_using_select();
int connect_server();
void init_socket();
void close_socket();
void write_conf_using_socket();
void write_distrib_using_sockets();
void write_rgb_picture_to_socket();
void write_to_socket(float *dist, int size);
void init_client(void);
void write_quit_to_socket(void);
#endif /* !_SOCKETS_H_ */
