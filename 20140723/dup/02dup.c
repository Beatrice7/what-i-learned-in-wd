#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>

#define ERR_EXIT(m) \
    do { \
        perror(m);\
        exit(EXIT_FAILURE);\
    }while(0)

int main(int argc, const char *argv[])
{
    int fd = open("test.txt", O_RDONLY, 0666);
    if(fd == -1)
        ERR_EXIT("open");

    int fd2 = dup(fd);

    printf("%d, %d\n", fd, fd2); // 3 4

    char buf[100] = {0};
    read(fd2, buf, 5);
    printf("fd1, buf = %s\n", buf);

    read(fd, buf, 5);
    printf("fd2, buf = %s\n", buf);
    
    close(fd);
    memset(buf, 0, sizeof(buf));
    read(fd2, buf, 3);
    printf("fd2, buf = %s\n", buf);

    close(fd2);


    return 0;

}
