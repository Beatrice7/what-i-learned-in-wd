#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 这是内联函数，代码在编译期间进行扩展
 */
inline void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, const char *argv[])
{
    int a = 9;
    int b = 5;
    cout << "A = " << a << " B= " << b << endl;
    // 这里是替换的地方
    swap(&a, &b);
    cout << "A = " << a << " B= " << b << endl;
    return 0;
}
