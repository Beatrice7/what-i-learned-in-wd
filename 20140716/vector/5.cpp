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

    //用一段迭代器范围，去初始化另一种容器。
    list<string> lst(vec.begin(), vec.end());
    for(auto &item: lst){
        cout << item << endl;    
    }
    return 0;
}
