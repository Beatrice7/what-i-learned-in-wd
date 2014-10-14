#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef int T;
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

void swap_point(int *&a, int *&b){
    int *temp(a);
    a = b;
    b = temp;
}


int main(int argc, const char *argv[])
{
    int i = 9;
    int j = 10;
    int *a = &i;
    int *b = &j;
    cout << "before swap  a = " <<  a << " b = "  << b << endl; 
    swap_point(a, b);
    cout << "after swap  a = " << a << " b = "  << b << endl; 
    return 0;
}
