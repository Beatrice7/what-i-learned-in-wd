#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main(int argc, const char *argv[])
{
    queue<string> Q;
    Q.push("beijing");
    Q.push("shanghai");
    Q.push("nanjing");


    while(!Q.empty()){
        cout << Q.front() << endl;
        Q.pop();
    }
    return 0;
}
