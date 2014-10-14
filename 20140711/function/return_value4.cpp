#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 形参表禁止s1和s2被修改，但是返回一个string引用，代表期望修改它们
 * 这造成一种语义上的矛盾
 */
string &shortString(const string &s1, const string &s2){
    return (s1.size() < s2.size())? s1 : s2;
}



int main(int argc, const char *argv[])
{
    cout << shortString("hello", "hell");
    return 0;
}
