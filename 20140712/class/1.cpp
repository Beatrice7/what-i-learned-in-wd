#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student{
    string name_;
    int age_;
    int score_;
};

void print(const Student &s, ostream &os){
    os << s.name_ << " " << s.age_ << " " << s.score_ << endl;
}



int main(int argc, const char *argv[])
{
    Student s;
    s.name_ = "suqing";
    s.age_ = 17;
    s.score_ = 99;

    print(s, cout);
    return 0;
}
