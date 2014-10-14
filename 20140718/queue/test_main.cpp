#include "Queue.h"
#include <assert.h>
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    Queue Q;
    Q.push(12);
    Q.push(99);
    Q.push(32);
    Q.push(56);
    Q.push(77);

    Queue Q2(Q);

    Q.clear();

    assert(Q.isEmpty());
    while(Q2.isEmpty() == false)
    {
        cout << Q2.top() << endl;
        Q2.pop();
    }

    return 0;
}

