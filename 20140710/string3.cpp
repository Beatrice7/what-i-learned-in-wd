#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    string s1 = "orange";
    string s2 = "banana";
    string res;
    res = s1 + "test";
    cout << res << endl;
    res = s1 + s2;
    cout << res << endl;
    res = "apple" + s2;
    cout << res << endl;

    res = "apple " + "orange";
    cout << res << endl;

    
    return 0;
}
