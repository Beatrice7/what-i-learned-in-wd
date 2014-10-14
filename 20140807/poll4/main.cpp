#include "EchoServer.h"
using namespace std;

int main(int argc, const char *argv[])
{
    InetAddress addr(8989);
    EchoServer server(addr);
    server.start();
    return 0;
}
