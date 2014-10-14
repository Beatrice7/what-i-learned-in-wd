#include <iostream>
#include <string>
#include <vector>
#include <functional>
using namespace std;

//C++11新标准

void test(int i, double j)
{
    cout << i << " " << j << endl;
}

int main(int argc, const char *argv[])
{
    //void (*) (int, double)
    function<void (int, double)> fp;
    fp = test;
    fp(10, 3.45);
    return 0;
}










