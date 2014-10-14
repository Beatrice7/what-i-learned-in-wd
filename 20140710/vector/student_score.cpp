#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student{
    string name_;
    int score_;
};

int count_student(const vector<Student> &vec, vector<string> &names){
    int cnt = 0;
    names.clear();
    for(vector<Student>::const_iterator it = vec.begin(); it != vec.end(); ++it){
        if(it->score_ >= 60){
            ++cnt;
            names.push_back(it->name_);
        }
    }
    return cnt;
}

void print(const vector<string> &names){
    for(vector<string>::const_iterator it = names.begin(); it != names.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

int main(int argc, const char *argv[])
{
    vector<Student> vec;
    Student s;
    while(cin >> s.name_ >> s.score_){
        // push_back放入的是副本，这是一种值语义
        vec.push_back(s);
    }
    vector<string> names;
    cout << count_student(vec, names) << endl;
    print(names);
    return 0;
}
