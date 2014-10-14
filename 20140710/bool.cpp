#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    bool res;
    string s1 = "hello";
    string s2 = "world";
    res = (s1 < s2);  // true
    /*
     * bool类型的值为true和false，但是打印时仍然为1或者0
     */
    cout << res << endl;
    return 0;
}
