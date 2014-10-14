#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
 * const的保护语义与非const返回值的修改语义发生冲突
 */
string &get_reference(const string &name){
    return name;
} 

int main(int argc, const char *argv[])
{
    string name = "hello";
    return 0;
}
