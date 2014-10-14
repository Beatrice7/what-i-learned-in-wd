#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
    vector<int> vec;
    cout << "size = " << vec.size() << " capacity = " << vec.capacity() << endl; 

    for(vector<int>::size_type ix = 0; ix != 24; ++ix)
    {
        vec.push_back(ix);
    }
    cout << "after adding 24...." << endl;
    cout << "size = " << vec.size() << " capacity = " << vec.capacity() << endl; 

    vec.reserve(50);
    cout << "after reserving 50..." << endl;

    cout << "size = " << vec.size() << " capacity = " << vec.capacity() << endl; 


    while(vec.size() != vec.capacity())
    {
        vec.push_back(10);
    }

    cout << "filling ...." << endl;
    cout << "size = " << vec.size() << " capacity = " << vec.capacity() << endl; 
    

    vec.push_back(34);
    cout << "size = " << vec.size() << " capacity = " << vec.capacity() << endl; 

    return 0;
}
