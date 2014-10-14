#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{

    /*
     * 字符串的查找操作
     */ 
    string s = "microsoft";
    char c;
    while(cin >> c){
        string::size_type pos = s.find(c);
        if(pos == string::npos){
            cout << "not found!" << endl;
        }else{
            cout << pos;
            cout << s[pos] << endl;
        }
    }
    return 0;
}
