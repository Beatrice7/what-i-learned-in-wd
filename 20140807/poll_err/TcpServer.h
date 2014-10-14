#ifndef TCP_SERVER_H
#define TCP_SERVER_H 

#include "NonCopyable.h"
#include "InetAddress.h"
#include "TcpConnection.h"
#include "Socket.h"
#include "PollPoller.h"
#include "ThreadPool.h"
#include <memory>
#include <iostream>


class TcpServer : private NonCopyable
{
    public:
        typedef TcpConnection::TcpConnectionCallback TcpCallback;

        explicit TcpServer(const InetAddress &addr);

        //set Callback
        void setConnection(const TcpCallback &cb)
        { onConnect_ = cb; }
        void setMessage(const TcpCallback &cb)
        { onMessage_ = cb; }
        void setClose(const TcpCallback &cb)
        { onClose_ = cb; }

        void handleConnection(const TcpConnectionPtr &conn)
        {
            std::cout << "TcpServer onConnect_" << std::endl;
            if(onConnect_)
//            onConnect_(conn);
            pool_.addTask(bind(onConnect_, conn));            
        }
        void handleMessage(const TcpConnectionPtr &conn)
        {
            std::cout << "TcpServer onMessage_" << std::endl;
            if(onMessage_)
            //onMessage_(conn);
            pool_.addTask(bind(onMessage_, conn));            
        }
        void handleClose(const TcpConnectionPtr &conn)
        {
            std::cout << "TcpServer onClose_" << std::endl;
            if(onClose_)
            //onClose_(conn);
            pool_.addTask(bind(onClose_, conn));            
        }


        void start();

    private:
        std::unique_ptr<Socket> sock_;
        std::unique_ptr<PollPoller> poller_;
        ThreadPool pool_;

        TcpCallback onConnect_;
        TcpCallback onMessage_;
        TcpCallback onClose_;

};

#endif  /*TCP_SERVER_H*/
