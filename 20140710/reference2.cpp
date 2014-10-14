#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    string s = "hello";
    string &rs = s;
    rs += "test";
    cout << rs << endl << s << endl;
    return 0;
}
