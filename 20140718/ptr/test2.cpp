#include <stdexcept>
#include "SmartPtr.h"
using namespace std;

int main(int argc, const char *argv[])
{
    try{
        //这里不会执行12行，造成了内存泄露
        Animal *ps = new Animal[3];    
        throw runtime_error("error");

        delete[] ps;
    }catch(runtime_error &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}
