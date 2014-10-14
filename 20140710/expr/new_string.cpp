#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
    //初始值为 ""
    string *ps = new string;
    cout << (*ps == string("") ) << endl;

    string *ps2 = new string("apple");
    cout << *ps2 << endl;

    string *ps3 = new string[10];


    delete ps;
    delete ps2;
    delete[] ps3;

    return 0;
}
