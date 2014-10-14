#include "Thread.h"
#include <iostream>
#include <string>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

/*
 * 这个线程类目前只可以接收C函数
 * 如果是一个C++成员函数，那么他的指针是
 * void *(Test::*) (void*)
 * 后面使用一种工具bind，可以实现函数的转化
 * boost::bind
 */
void *threadFunc(void *arg)
{
    while(1)
    {
        sleep(1);
        cout << "hello world! " << endl;
    }
}


int main(int argc, const char *argv[])
{
    Thread t(threadFunc);
    t.start();
    t.join();
    return 0;
}
