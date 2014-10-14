#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    string s = "google";
    /*
    for(int i = 0; i != s.size(); ++i){
        cout << s[i] << " ";
    } */
    for(string::size_type ix = 0; ix != s.size(); ++ix){
        cout << s[ix] << " ";
    }
    cout << endl;
    return 0;
}
