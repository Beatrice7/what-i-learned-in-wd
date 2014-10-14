#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main(int argc, const char *argv[])
{
    list<string> lst;
    lst.push_back("wangyadong");
    lst.push_back("yuanzhongyan");
    lst.push_back("wangjie");
    lst.push_back("xiaobaihe");
    lst.push_back("wangshihong");


    list<string>::iterator res = find(lst.begin(), lst.end(), string("xiaobaihe"));
    if(res == lst.end()){
        cout << "Not Found" << endl;
    }

    lst.erase(res, lst.end());
    cout << "-----------" << endl;
    for(list<string>::iterator it = lst.begin(); it != lst.end(); ++it){
        cout << *it << endl;    
    }

    return 0;
}
