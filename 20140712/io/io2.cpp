#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
    int num = 9;
    cin >> num;

    cout << num << endl;

    cout << "bad = " << cin.bad() << endl;
    cout << "eof = " << cin.eof() << endl;
    cout << "fail = " << cin.fail() << endl;
    cout << "good = " << cin.good() << endl;

    string s = "hello";
    /*
     * 上面输入了非法数据，此时cin内部某些状态发生了改变
     * 此时的cin是不可用的。
     */
    cin >> s;
    cout << "string = " << s << endl;

    cout << "bad = " << cin.bad() << endl;
    cout << "eof = " << cin.eof() << endl;
    cout << "fail = " << cin.fail() << endl;
    cout << "good = " << cin.good() << endl;

    cout << "-----------" << endl;
    return 0;
}
