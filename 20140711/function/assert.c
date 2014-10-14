#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 没有加头文件，所以gcc默认assert的函数原型为:
 * int assert(int);
 */

int main(int argc, const char *argv[])
{
    //assert是个宏
    assert(2 == 3);
    return 0;
}
