#include <stdexcept>
#include <iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout << "construct ..... " << endl;
        }

        ~Test()
        {
            cout << "destruct..... " << endl;
        }
};



int main(int argc, const char *argv[])
{
    try{

        //栈内存一定会被释放
        Test t;
        throw runtime_error("error");

    }catch(runtime_error &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}




