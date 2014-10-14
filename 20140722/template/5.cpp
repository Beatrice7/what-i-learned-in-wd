#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T, typename V>
void test(T a, V b)
{
    //这里存在歧义，可以解释成指针的定义
    //也可以看做乘法
    //T::size_type *p;
    //
    //这里显式告诉编译器，这是一个指针的定义
    //而不是乘法
    typename T::size_type *p;
}


int main(int argc, const char *argv[])
{
    test(string("hello"), 5);
    return 0;
}
