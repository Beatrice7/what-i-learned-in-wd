#include "TcpServer.h"
#include "Socket.h"
#include "PollPoller.h"
#include <functional>
#include <iostream>
using namespace std;
using namespace std::placeholders;
#define ERR_EXIT(m) \
    do { \
        perror(m);\
        exit(EXIT_FAILURE);\
    }while(0)

TcpServer::TcpServer(const InetAddress &addr)
    :pool_(1000, 4)
{
    int sockfd = ::socket(PF_INET, SOCK_STREAM, 0);
    if(sockfd == -1)
        ERR_EXIT("socket");
    sock_.reset(new Socket(sockfd));
    sock_->setReusePort();
    sock_->bindAddress(addr);
    sock_->listen();

}


void TcpServer::start()
{
    poller_.reset(new PollPoller(sock_->fd()));
    poller_->setConnectionCallback(bind(&TcpServer::handleConnection, this, _1));
    poller_->setMessageCallback(bind(&TcpServer::handleMessage, this, _1));
    poller_->setCloseCallback(bind(&TcpServer::handleClose, this, _1));

    pool_.start();


    while(1)
    {
        poller_->poll();
        poller_->handleAccept();
        poller_->handleData();
    }
}


