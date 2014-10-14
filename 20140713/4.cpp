#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Test{
    public:
    
        /*
         * 这里编译错误，原因在于test加上了const属性，
         * 这使得在test内，无法修改本对象。
         */
         void test() const{
            a_ = 10;
         }

    private:

        int a_;
};


int main(int argc, const char *argv[])
{
    Test t;
    return 0;
}
