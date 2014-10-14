#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
} */

template <typename T>
void swap(T *a, T *b){
    T temp(*a);
    *a = *b;
    *b = temp;
}

int main(int argc, const char *argv[])
{
    int a = 10, b = 8;
    cout << "before swap , a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << "after swap , a = " << a << " b = " << b << endl;

    string s1 = "hello";
    string s2 = "apple";
    cout << "before swap, s1 = " << s1 << " s2 = " << s2 << endl;
    swap(&s1, &s2);
    cout << "after swap, s1 = " << s1 << " s2 = " << s2 << endl;
    

    return 0;
}
