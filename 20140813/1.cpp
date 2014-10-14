#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char *argv[])
{
    string s = "宿青";

    for(size_t ix = 0; ix != s.size(); ++ix)
    {
        printf("%x\n", s[ix] & 0xff);
    }
    return 0;
}
