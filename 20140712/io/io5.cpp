#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
    int num;
    while(cin >> num){
        cout << num << endl;
    }

    cout << "fail = " << cin.fail() << endl;
    cout << "eof = " << cin.eof() << endl;

    cin.clear();

    cout << "after clear" << endl;
    cout << "fail = " << cin.fail() << endl;
    cout << "eof = " << cin.eof() << endl;

    string s = "test";
    cin >> s;
    cout << s << endl;
    return 0;
}
