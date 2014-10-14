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

    vector<string>::iterator res = find(vec.begin(), vec.end(), string("baoge"));
    if(res == vec.end()){
        cout << "not found";
    }else{
        cout << "found" << endl;
    }


    //insert是在该迭代器上插入元素，该迭代器之前指向的元素后移
    vec.insert(res, "guan'ge");

    for(vector<string>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << endl;    
    }

    return 0;
}
