#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/socket.h>
#define ERR_EXIT(m) \
    do { \
        perror(m);\
        exit(EXIT_FAILURE);\
    }while(0)

int main(int argc, const char *argv[])
{
    int fds[2];
    //定义了一对全双工的管道
    if(socketpair(PF_UNIX, SOCK_STREAM, 0, fds) == -1)
    {
        ERR_EXIT("socketpair");
    }

    pid_t pid;
    if((pid = fork()) == -1)
        ERR_EXIT("fork");

    if(pid == 0)
    {
        close(fds[0]);
        write(fds[1], "hello", strlen("hello"));
        exit(EXIT_SUCCESS);
    }else if(pid > 0)
    {
        close(fds[1]);
        sleep(1);
        char buf[100] = {0};
        read(fds[0], buf, sizeof buf);
        printf("receive : %s\n", buf);
    }



    return 0;
}
