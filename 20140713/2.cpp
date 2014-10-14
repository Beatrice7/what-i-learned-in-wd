#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
    private:
        string name_;
        int age_;
        int score_;

    public:
        //int test_;

        void setName(const string &name){
            name_ = name;
        }
        const string &getName() const {
            return name_;
        }

        void setAge(int age){
            age_ = age;
        }

        int getAge() const {
            return age_;
        }

        void setScore(int score){
            score_ = score;
        }

        int getScore() const {
            return score_;
        }

        void print(ostream &os){
            os << name_ << " " << age_ << " " << score_ << endl;
        }

};

int main(int argc, const char *argv[])
{
    Student s;
    s.setName("zhangshibo");
    s.setAge(20);
    s.setScore(99);
    s.print(cout);
    return 0;
}
