#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 这里在返回值时，声称了一个临时的string对象
 */
string shortString(const string &s1, const string &s2){
    return (s1.size() < s2.size())? s1 : s2;
}



/*
 * 这里在返回int时生成了一个无名的int值
 * 这是一个临时的值
 */
int get_val(){
    int a = 2;
    return a;
}


int main(int argc, const char *argv[])
{
    cout << get_val() << endl;
    //a的值赋予返回的中间值，然后赋值给res
    int res = get_val();
    return 0;
}
