#include <stdexcept>
#include "SmartPtr.h"
using namespace std;

int main(int argc, const char *argv[])
{
    try{
        //这里的ptr离开try时一定会被销毁
        //从而导致Animal对象一定会被析构
        SmartPtr ptr(new Animal);
        throw runtime_error("error");


    }catch(runtime_error &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}
