#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, const char *argv[])
{
    vector<string> vec;
    vec.push_back("liujin");
    vec.push_back("zhangxu");
    vec.push_back("lihuiqiang");
    vec.push_back("limengxiao");
    vec.push_back("tanhaifu");

    
    vector<string>::iterator res = find(vec.begin(), vec.end(), string("zhangxu"));
    if(res == vec.end()){
        cout << "not found" << endl;
    }else{
        cout << "found" << endl;
    }

    list<string> lst;
    lst.push_front("lule");
    lst.push_front("wangrui");
    lst.push_front("guan'ge");
    lst.push_front("zhuangxinhao");


    vec.insert(res, lst.begin(), lst.end());

    for(vector<string>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << endl;    
    }

    return 0;
}
