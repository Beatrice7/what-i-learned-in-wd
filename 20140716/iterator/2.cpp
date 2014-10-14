#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 只有支持复制和赋值的对象才能放入容器中。
 *
 */

class Test
{
    public:
        Test() {}
    private:
        /*
         * 第一行是复制用的
         * 第二行用于赋值
         * 这里设为私有，使得Test失去了复制和赋值的能力
         */
        Test(const Test &);
        Test &operator=(const Test &);
};

int main(int argc, const char *argv[])
{
    vector<Test> vec; 
    Test t;
    //只有添加了下列的代码，编译才会错误
    vec.push_back(t);
    return 0;
}










