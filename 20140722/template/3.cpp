#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T1, typename T2>
T2 add(const T1 &a, const T2 &b)
{
    return a + b;
}

int main(int argc, const char *argv[])
{
    //这里编译器推导类型为int double
    double a = add(2, 3.4);
    cout << a << endl;
    return 0;
}
