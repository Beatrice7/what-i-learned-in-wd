#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
    vector<int> vec;
    for (int i = 0; i < 1000; i++) {
        vec.push_back(i);
    }


    cout << "size= " << vec.size() << " capacity = " << vec.capacity() << endl;
    return 0;
}
