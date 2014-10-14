#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char *argv[])
{
    vector<int> vec(10);
    cout << "capacity = " << vec.capacity() << endl;
    vec.push_back(99);
    cout << "capacity = " << vec.capacity() << endl;
    return 0;
}
