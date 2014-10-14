#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
    int a;
    cout << "good = " << cin.good() << endl;

    while (cin >> a) {
        cout << a << endl;
    }

    cout << "eof = " << cin.eof() << endl;
    cout << "fail = " << cin.fail() << endl;

    std::string s = "hello";
    cin >> s;
    cout << s << endl;
    return 0;
}
