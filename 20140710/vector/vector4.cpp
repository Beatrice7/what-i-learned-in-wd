#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void BubbleSort(vector<int> &vec, bool (*cmp) (int, int)){
    auto len = vec.size();
    for(size_t ix = 0; ix < len - 1; ++ix){
        for(size_t iy = 0; iy < len - 1 - ix; ++iy){
            if(!cmp(vec[iy], vec[iy + 1])){
                swap(vec[iy], vec[iy + 1]);                    
            }
        }
    }
}


bool cmp1(int a, int b){
    return a < b;
}

int main(int argc, const char *argv[])
{
    vector<int> vec;
    srand(100000);
    vec.push_back(rand() % 99);
    vec.push_back(rand() % 99);
    vec.push_back(rand() % 99);
    vec.push_back(rand() % 99);
    vec.push_back(rand() % 99);
    vec.push_back(rand() % 99);
    vec.push_back(rand() % 99);
    vec.push_back(rand() % 99);

    BubbleSort(vec, cmp1);

    for(const auto &item: vec){
        cout << item << " ";    
    }
    cout << endl;

    return 0;
}

