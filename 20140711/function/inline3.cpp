#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 这是一段错误的函数，但是不进行调用，编译器无法检查它的错误。
 */
#define TEST1 {\
    adfggg\
    fgege3\
}

int main(int argc, const char *argv[])
{
    //TEST1; 
    return 0;
}

