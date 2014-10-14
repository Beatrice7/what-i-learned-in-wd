#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool str_subrange(const std::string &str1, const std::string &str2)
{
    if(str1.size() == str2.size())
    {
    return str1 == str2;
    }
    std::string::size_type size = (str1.size() < str2.size())? str1.size() : str2.size();
    std::string::size_type i = 0;
    //look at each element up to size of smaller string
    while(i != size)
    {
        if(str1[i] != str2[i])
            return false;
        ++i;
    }
    //error
    return true;
}

int main(int argc, const char *argv[])
{
    
    return 0;
}
