#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 这是一个宏函数，在预编译期间调用处被替换成相应的代码
 */
#define SWAP(a, b) {\
    int temp = *a;\
    *a = *b;\
    *b = temp;\
}

int main(int argc, const char *argv[])
{
    int a = 9;
    int b = 5;
    cout << "A = " << a << " B= " << b << endl;
    // 这里是替换的地方
    SWAP(&a, &b);
    cout << "A = " << a << " B= " << b << endl;
    return 0;
}
