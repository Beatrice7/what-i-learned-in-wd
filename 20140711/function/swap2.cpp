#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
void swap2(T &a, T &b){
    T temp(a);
    a = b;
    b = temp;
}


int main(int argc, const char *argv[])
{
    int a = 10;
    int b = 8;
    cout << "before swap , a = " << a << " b = " << b << endl;
    swap2(a, b);
    cout << "after swap , a = " << a << " b = " << b << endl;

    string s1 = "hello";
    string s2 = "apple";
    cout << "before swap, s1 = " << s1 << " s2 = " << s2 << endl;
    swap2(s1, s2);
    cout << "after swap, s1 = " << s1 << " s2 = " << s2 << endl;
    

    return 0;
}
