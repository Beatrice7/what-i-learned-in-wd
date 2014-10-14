#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, const char *argv[])
{
    ifstream in;
    in.open("test.txt");
    string s;
    while(in >> s){
        cout << s << " ";
    }
    cout << endl;
    in.close();
    return 0;
}

