#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
using namespace std;

/*
 * 本例演示了字节的拼接
 */
int main(int argc, const char *argv[])
{
    unsigned char c1 = 0xe5;
    unsigned char c2 = 0xae;
    unsigned char c3 = 0xbf;

    // 0xe5 ae bf
    uint32_t c = 0;
    c = c1;
    c = (c << 8) + c2;
    c = (c << 8) + c3;
    printf("%x\n", c & 0xffffff);
    return 0;
}
