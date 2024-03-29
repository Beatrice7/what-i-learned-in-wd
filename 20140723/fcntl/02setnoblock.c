#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#define ERR_EXIT(m) \
    do { \
        perror(m);\
        exit(EXIT_FAILURE);\
    }while(0)

void set_nonblock(int fd);

int main(int argc, const char *argv[])
{

    set_nonblock(STDIN_FILENO);

    char buf[100];
    int ret = read(STDIN_FILENO, buf, 100);
    if(ret == -1)
        ERR_EXIT("read");

    
    return 0;
}


void set_nonblock(int fd)
{
    int val = fcntl(fd, F_GETFL, 0);
    if(val == -1)
        ERR_EXIT("fcntl");
    val |= O_NONBLOCK;
    if(fcntl(fd, F_SETFL, val) < 0)
        ERR_EXIT("fcntl");
}















