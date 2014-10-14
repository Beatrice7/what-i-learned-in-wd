#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

int main(int argc, const char *argv[])
{
    int i = 5;
    int j = 0;
    int res;
    cout << "before try..." << endl;
    try{
        if(j == 0){
            throw exception();
        }else{
            res = i / j;
            cout << "res = " << res << endl;
        } 

        cout << "--" << endl;

    }catch(exception &e){
        cout << "enter catch...." << endl;
        cout << e.what() << endl;
    }
    cout << "after try catch..." << endl;
}
