#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main(int argc, const char *argv[])
{
    vector<int> vec(10);

    cout << "size = " << vec.size() << endl;

    //将元素的数量设置为50
    vec.resize(50);
    cout << "size = " << vec.size() << endl;
    return 0;
}
