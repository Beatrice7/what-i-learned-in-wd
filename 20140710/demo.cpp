#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal{
    public:
        Animal() {
            cout << "construct " << endl;
        };
        virtual ~Animal(){
            cout << "destroy " << endl;
        }
    private:
        
};

int main(int argc, const char *argv[])
{
    Animal a, b; 
    return 0;
}
