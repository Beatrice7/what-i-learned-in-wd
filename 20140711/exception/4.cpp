#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

/*
 * 本程序的目的是说明，异常经过合理的处理，程序可以继续执行
 * 
 */

using namespace std;
int main(int argc, const char *argv[])
{
    int num;
    try{
        cin >> num;
        if(num == 1){
            throw std::runtime_error("1");
        }else if(num == 2){
            throw std::out_of_range("2");
        }else{
            throw std::logic_error("3");
        }
    }catch(...){
        cout << "catch a exception" << endl;
    }

    cout << "continue" << endl;


    return 0;
}
