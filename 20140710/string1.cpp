#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    string s = "apple";
    cout << s.size() << endl;
    size_t len = s.size();
    for(size_t ix = 0; ix != len; ++ix){
        cout << s[ix] << " ";
    }
    cout << endl;

    return 0;
}
