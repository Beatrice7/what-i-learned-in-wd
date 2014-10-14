#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student{
    string name_;
    int age_;
    int score_;

    void print(ostream &os){
        os << name_ << " " << age_ << " " << score_ << endl;
    }
};


/*
void print(const Student &s, ostream &os){
    os << s.name_ << " " << s.age_ << " " << s.score_ << endl;
} */



int main(int argc, const char *argv[])
{
    Student s;
    s.name_ = "suqing";
    s.age_ = 17;
    s.score_ = 99;

    s.print(cout);

    Student *ps = &s;
    ps->print(cout);

    return 0;
}
