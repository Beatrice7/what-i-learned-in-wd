#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
string &test(const string &name){
    return name;
} */


char &get_reference(string &name){
    return name[0];
}

int main(int argc, const char *argv[])
{
    string name = "hello";
    get_reference(name) = 'e';
    cout << name << endl;
    return 0;
}
