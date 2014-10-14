#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main(int argc, const char *argv[])
{
    vector<string> vec;
    vec.push_back("beijing");
    vec.push_back("shanghai");
    vec.push_back("chongqing");
    vec.push_back("tianjin");
    vec.push_back("longhua");

    vector<string> vec2(vec.begin(), vec.end());
    for(vector<string>::iterator it = vec2.begin(); it != vec2.end(); ++it){
        cout << *it << endl;    
    }
    return 0;
}
