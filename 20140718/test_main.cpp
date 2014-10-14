#include "Integer.h"
using namespace std;

int main(int argc, const char *argv[])
{
    Integer data(10);

    cout << data << endl;

    cout << ++data << endl;

    Integer data2(12);

    cout << data2 << endl;   //12
 
    cout << data2++ << endl; //12

    return 0;
}
