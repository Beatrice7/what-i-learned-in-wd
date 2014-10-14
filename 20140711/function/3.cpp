#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 这里采用了值传递，造成了两个string拷贝的开销
 */
bool isShort(string s, string s2){
    return s.size() < s2.size();
}


/*
 * 这里采用了引用传递，避免了string对象拷贝的开销
 * 但是这里的引用可能改变string对象的值
 */
bool isShort2(string &s, string &s2){
    return s.size() < s2.size();
}

/*
 * 这里的const &
 *
 */
bool isShort3(const string &s, const string &s2){
    return s.size() < s2.size();
}


int main(int argc, const char *argv[])
{
    string s = "microsoft";
    string s2 = "IBM";
    cout << isShort3(s, s2) << endl;
    return 0;
}
