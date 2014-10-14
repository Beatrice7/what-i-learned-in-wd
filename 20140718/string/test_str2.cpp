#include "String.h"
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    String s = "hello";
    s.debug();


    s = s.c_str();

    s.debug();
    return 0;
}
