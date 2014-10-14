#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
#include <unistd.h>
#define ERR_EXIT(m) \
    do { \
        perror(m);\
        exit(EXIT_FAILURE);\
    }while(0)

/*
 * alarm与pause协作
 * 起到sleep的作用
 *
 */
int main(int argc, const char *argv[])
{

    alarm(3);   //程序3s后给自己发一个SIGALRM信号


    pause();    //程序暂停，等待有信号到来

    return 0;
}
