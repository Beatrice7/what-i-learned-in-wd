#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int getLenOfUTF8(unsigned char c)
{
    int cnt = 0;
    while(c & (1 << (7-cnt)))
        ++cnt;
    return cnt; 
}

int main(int argc, const char *argv[])
{

}
