#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
T add(const T &a, const T &b)
{
    return a + b;
}

int main(int argc, const char *argv[])
{
    //这里编译器推导类型为int double
    int a = add(2, 3.4);
    cout << a << endl;
    return 0;
}
