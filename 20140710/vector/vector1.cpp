#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    //这里声明了一个int类型的 空数组
    // vector不是一种完全的类型，必须加上类型信息 
    // vector<int>才是一种合法的类型
    vector<int> vec;
    
    cout << "size of vector = " << vec.size() << endl;

    //push_back是在数组的后面追加元素
    vec.push_back(23);
    vec.push_back(45);
    vec.push_back(3);
    vec.push_back(100);
    vec.push_back(9);
    vec.push_back(11);
    
    cout << "size of vector = " << vec.size() << endl;

    for(vector<int>::size_type ix = 0; ix != vec.size(); ++ix){
        cout << vec[ix] << " ";
    }

    cout << endl;


    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << endl;
    }
    cout << endl;



    return 0;
}
