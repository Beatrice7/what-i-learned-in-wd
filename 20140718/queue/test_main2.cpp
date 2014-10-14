#include "Queue.h"
#include <assert.h>
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    Queue Q2;

    {
        Queue Q;
        Q.push(12);
        Q.push(67);
        Q.push(88);
        Q.push(924);
        Q.push(34);

        Q2 = Q;
    }

    while(Q2.isEmpty() == false)
    {
        cout << Q2.top() << endl;
        Q2.pop();
    }

    return 0;
}
