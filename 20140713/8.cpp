#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Computer{
    public:
        void set(const string &s){
            s_ = s;
        }

        string get() const{
            return s_;
        }

        string &get() {
            return s_;
        }
    private:
        string s_;
};


int main(int argc, const char *argv[])
{
    Computer t;
    t.set("zhangsan");
    cout << t.get() << endl;

    const Computer t2;
    cout << t2.get() << endl;
    return 0;
}
