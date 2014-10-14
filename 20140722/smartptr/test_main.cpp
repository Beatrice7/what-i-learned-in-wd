#include "SmartPtr.h"
using namespace std;

int main(int argc, const char *argv[])
{
    SmartPtr ptr(new Animal);

    ptr.resetPtr(NULL);

    if(!ptr)
    {
        cout << "ptr == NULL" << endl;
    }


    ptr.resetPtr(new Animal);

    if(ptr)
    {
        cout << "ptr != NULL " << endl;
    }

    return 0;
}

