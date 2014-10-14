#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    /*
     * 使用迭代器遍历string
     * begin指向string的第一个元素，而end指向最后一个元素的下一个位置
     */
    string s = "apple";
    for(string::iterator it = s.begin(); it != s.end(); ++it){
        cout << *it << endl;
    }
    return 0;
}
