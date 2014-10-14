#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;


int main(int argc, const char *argv[])
{
    list<string> lst;
    lst.push_back("nanshan");
    lst.push_back("luohu");
    lst.push_back("longhua");
    lst.push_back("futian");
    lst.push_back("baoan");
    lst.push_back("longgang");
    lst.push_back("wangdao");


    for(list<string>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << endl;
    }


    cout << "------------------------" << endl;

    for(list<string>::reverse_iterator it = lst.rbegin(); it != lst.rend(); ++it)
    {
        cout << *it << endl;
    }



    return 0;
}
