#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    //整行读取字符串
    while(getline(cin, s)){
        cout << s << endl;
    }
    return 0;
}
