#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
 * cin的good为假的时候，对cin进行bool检测，得到的是false
 *
 */
int main(int argc, const char *argv[])
{
    int num;
    cout << "good = " << cin.good() << endl;
    cout << (bool)cin << endl;
    cin >> num;
    cout << "good = " << cin.good() << endl;
    cout << (bool)cin << endl;
    return 0;
}
