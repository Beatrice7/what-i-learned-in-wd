#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, const char *argv[])
{
    ofstream os;
    os.open("out.txt");
    
    vector<string> vec;
    vec.push_back("beijing");
    vec.push_back("shanghai");
    vec.push_back("tianjin");
    vec.push_back("jinan");
    
    for(vector<string>::iterator it = vec.begin(); it != vec.end(); ++it){
        //cout << *it << endl;    
        os << *it << endl;    
    }

    os.close();
    return 0;
}
