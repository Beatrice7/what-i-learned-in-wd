#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    s = "IBM";  // strcpy
    s += " Sun";
    cout << s << endl;
    return 0;
}
