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

    //vector不支持push_front操作
    vec.push_front("liubin");
}
