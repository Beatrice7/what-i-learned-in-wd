#include <iostream>
#include <string>
#include <vector>
using namespace std;

//模板形参表不一定完全是类型，也可以是值
template <typename T, size_t N>
void print(T (&arr)[N])
{
    for(size_t ix = 0; ix != N; ++ix)
    {
        cout << arr[ix] << " ";
    }
    cout << endl;
}


int main(int argc, const char *argv[])
{
    int arr[3] = {34, 32, 88};
    print(arr);
    return 0;
}
