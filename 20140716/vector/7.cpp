#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main(int argc, const char *argv[])
{
    list<string> lst;
    lst.push_back("beijing");
    lst.push_back("shanghai");

    cout << lst[1] << endl;
    return 0;
}
