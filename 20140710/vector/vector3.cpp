#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    vector<string> vec;
    vec.push_back("hello");
    vec.push_back("world");
    vec.push_back("test");
    vec.push_back("beijing");
    vec.push_back("shanghai");

    // C++11提供的新式for循环  foreach
    // auto是C++11提供的自动类型推断
    for(const auto &s: vec){
        cout << s << endl;
    }

    //自动推断迭代器类型
    for(auto it = vec.begin(); it != vec.end(); ++it){
        cout << *it << endl;    
    }


    return 0;
}
