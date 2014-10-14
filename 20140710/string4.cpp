#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    string s1 = "test";
    string s2 = s1 + "orange" + "apple";
    string s3 = "orange" + s2 + "banana";
    string s4 = s3 + "a" + "b" + "c";

    cout << s2 << endl << s3 << endl << s4 << endl;

    // 这种是错误的
    string s5 = "a " + "b " + s2;


    return 0;
}
