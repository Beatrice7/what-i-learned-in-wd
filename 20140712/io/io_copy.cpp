#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * 这里采用值拷贝，函数调用时把cout拷贝一份给os
 */
/*
void print(ostream os){
   os << "hello" << endl; 
}  */


void print2(ostream &os){
   os << "hello" << endl; 
}

int main(int argc, const char *argv[])
{
    print2(cout); 
    return 0;
}
