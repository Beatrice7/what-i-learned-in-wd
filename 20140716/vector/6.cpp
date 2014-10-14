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
    

    //这里是错误的，不能用vector去初始化list
    list<string> lst(vec);
    for(auto &item: lst){
        cout << item << endl;    
    }

}
