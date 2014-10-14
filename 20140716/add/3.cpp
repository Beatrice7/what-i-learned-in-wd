#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, const char *argv[])
{
    vector<string> vec;
    vec.push_back("zhangsan");
    vec.push_back("suqing");
    vec.push_back("baoge");
    vec.push_back("kongjianfu");


    list<string> lst(vec.begin(), vec.end());
    lst.push_front("guanzhang");

    for(auto &item: lst){
        cout << item << endl;    
    }


}
