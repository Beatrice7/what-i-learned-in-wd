#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int &a, int &b){
    int temp(a);
    a = b;
    b = temp;
}

int main(int argc, const char *argv[])
{
    int a = 10;
    int b = 9;
    cout << "before swap, a= " << a << " b = " << b << endl;
    swap(a, b);
    cout << "after swap, a= " << a << " b = " << b << endl;

    return 0;
}
