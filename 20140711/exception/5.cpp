#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

/*
 * 说明catch只能捕获特定的异常，捕获不到的导致程序崩溃
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
    }catch(std::runtime_error &e){ //这里只能捕获runtime_error
        cout << "catch a runtime_error" << endl;
        // what用于打印错误信息
        cout << e.what() << endl;
    }catch(std::out_of_range &e){
        cout << "catch a out of range" << endl;
        cout << e.what() << endl;
    }/*catch (std::logic_error &e){
        cout << "catch a logic_error" << endl;
        cout << e.what() << endl;
    }*/
    catch(...){ //这里能够捕获所有的异常
        cout << "enter ...." << endl;
    }

    cout << "continue" << endl;


    return 0;
}
