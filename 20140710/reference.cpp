#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int i = 10;
    /*
     * 这里没有生成新的变量，而是给变量i起了新的别名 r
     */
    int &r = i;
    r = 9;
    cout << i << endl;
    return 0;
}
