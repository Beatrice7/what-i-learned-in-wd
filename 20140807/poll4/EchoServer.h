#ifndef ECHO_SERVER_H
#define ECHO_SERVER_H 

#include "TcpServer.h"
#include "ThreadPool.h"

class EchoServer
{
    public:
        EchoServer(const InetAddress &addr);
        void start();
    private:
        void onConnection(const TcpConnectionPtr &conn);
        void onMessage(const TcpConnectionPtr &conn);
        void onClose(const TcpConnectionPtr &conn);

        void compute(const std::string &s, const TcpConnectionPtr &conn);

        TcpServer server_;
        ThreadPool pool_;
};

#endif  /*ECHO_SERVER_H*/
