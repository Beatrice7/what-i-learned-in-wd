#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/wait.h>
#define ERR_EXIT(m) \
    do { \
        perror(m);\
        exit(EXIT_FAILURE);\
    }while(0)


int main(int argc, const char *argv[])
{
    signal(SIGCHLD, SIG_IGN);

    int fd = open("test.txt", O_WRONLY, 0666);
    if(fd == -1)
        ERR_EXIT("open");

    pid_t pid = fork();    
    if(pid == -1)
        ERR_EXIT("fork");
    else if(pid > 0)
    {
        //子进程先执行
        sleep(2);
        write(fd, "hello", strlen("hello"));
    }else
    {
        write(fd, "world", strlen("world"));
        exit(EXIT_SUCCESS);
    }
    return 0;
}






