#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
    string s = "hello";
    string s2 = s + "test";
    cout << s2 << endl;
    s += "zhangsan";
    cout << (s < s2) << endl;
    return 0;
}

