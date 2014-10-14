#include "String.h"
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    String s1 = "hello";
    String s2 = "world";
    String s3 = s1 + s2;
    cout << s3 << endl;

    cout << s3 + "test" << endl;

    for(size_t ix = 0; ix != s3.size(); ++ix)
    {
        cout << s3[ix] << " ";
    }
    cout << endl;
    return 0;
}
