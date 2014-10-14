#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    //向系统申请一个int单位，这里默认为0
    int *ptr = new int;
    cout << *ptr << endl;

    //申请了一个int单位，初始值为12
    int *ptr2 = new int(12);
    cout << *ptr2 << endl;

    //申请了9个int单位，默认为0
    int *ptr3 = new int[9];

    delete ptr; 
    delete ptr2;

    delete[] ptr3;
    
    return 0;
}
