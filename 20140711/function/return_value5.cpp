#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student{
    string name_;
    int age_;
};

Student *getStudent(){
    Student s;
    s.name_ = "zhangsan";
    s.age_ = 20;
    return &s;
}

Student &getStudent2(){
    Student s;
    return s;
}


int main(int argc, const char *argv[])
{
    Student &ps = getStudent2(); 
    return 0;
}
