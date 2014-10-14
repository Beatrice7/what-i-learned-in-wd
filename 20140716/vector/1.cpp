#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main(int argc, const char *argv[])
{
    //1.定义空数组，然后后面追加
    vector<string> vec;
    vec.push_back("beijing");
    vec.push_back("shanghai");
    vec.push_back("chongqing");
    vec.push_back("tianjin");
    vec.push_back("longhua");


    cout << "print vec" << endl;
    for(vector<string>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << endl;    
    }

    //2 定义的时候指定大小
    vector<string> vec2(5);
    for(vector<string>::size_type ix = 0; ix != 5; ++ix)
    {
        vec2[ix] = "xian";
    }

    for(vector<string>::iterator it = vec2.begin(); it != vec2.end(); ++it){
        cout << *it << endl;    
    }

    vector<string> vec3(10, string("shenzhen"));
    for(vector<string>::iterator it = vec3.begin(); it != vec3.end(); ++it){
        cout << *it << endl;    
    }

    return 0;
}
