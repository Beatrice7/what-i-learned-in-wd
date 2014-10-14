#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, const char *argv[])
{
    vector<string> vec;
    vec.push_back("beijing");
    vec.push_back("shanghai");
    vec.push_back("chongqing");
    vec.push_back("tianjin");
    vec.push_back("longhua");

    vector<string>::iterator res = find(vec.begin(), vec.end(), string("tianjin"));
    if(res == vec.end())
    {
        cout << "not found!" << endl;
    }else{
        cout << "found" << endl;
    }

    //这里不包含"tianjin"这个元素
    //这里用一段区间去初始化另一个新容器
    vector<string> vec2(vec.begin(), res);
    for(vector<string>::iterator it = vec2.begin(); it != vec2.end(); ++it){
        cout << *it << endl;    
    }
    return 0;
}
