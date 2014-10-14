#include "Integer.h"
using namespace std;


void print(const Integer &t)
{
    cout << t << endl;
}

int main(int argc, const char *argv[])
{
    Integer t(100);
    print(t);

    //这里是合法的，因为Integer的构造函数实现了一种
    //转化语义，将int转化为Integer
    print(100);

    return 0;
}
