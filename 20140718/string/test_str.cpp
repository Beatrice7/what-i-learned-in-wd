#include "String.h"
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    String s = "hello";

    cout << s << endl;

    String s2 = "world";
    s += s2;
    
    s += "liubin";

    cout << s << endl;

    return 0;
}
