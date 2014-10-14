#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERR_EXIT(m) \
    do { \
        perror(m);\
        exit(EXIT_FAILURE);\
    }while(0);

int main(int argc, const char *argv[])
{
    int *ptr = (int *)malloc(10 * sizeof(int));
    if(ptr == NULL){
        ERR_EXIT("malloc");
    }

    free(ptr);

    return 0;
}
