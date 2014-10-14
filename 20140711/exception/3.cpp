#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

int main(int argc, const char *argv[])
{
    cout << "AAAAAAAAAAAAAAAAAAAAa" << endl;

    //throw std::runtime_error("发生异常");
    throw std::invalid_argument("test");

    cout << "BBBBBBBBBBBBBBBBBBBBBBBBBB" << endl;

    return 0;
}
