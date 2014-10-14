#ifndef POLL_POLLER_H
#define POLL_POLLER_H 

#include "NonCopyable.h"
#include "TcpConnection.h"
#include <map>
#include <functional>
#include <poll.h>

class PollPoller : private NonCopyable
{
    public:
        typedef TcpConnection::TcpConnectionCallback PollerCallback;

        explicit PollPoller(int listenfd);
        ~PollPoller();

        void poll();
        void handleAccept();
        void handleData();

        void handleConnectionEvent(int peerfd);
        void handleMessageEvent(int peerfd);
        void handleCloseEvent(int peerfd);

        void setConnectionCallback(const PollerCallback &cb)
        { onConnectionCallback_ = cb; }
        void setMessageCallback(const PollerCallback &cb)
        { onMessageCallback_ = cb; }
        void setCloseCallback(const PollerCallback &cb)
        { onCloseCallback_ = cb; }

    private:
        struct pollfd event_[2048];
        int listenfd_;
        int maxi_;
        int nready_;
        std::map<int, TcpConnectionPtr> lists_; //从fd到TcpConnection的映射

        PollerCallback onConnectionCallback_;
        PollerCallback onMessageCallback_;
        PollerCallback onCloseCallback_;

        typedef std::map<int, TcpConnectionPtr>::iterator TcpIterator;

        //两个变量用于线程池
        static size_t kPoolQueueSize;
        static size_t kPoolThreadSize;
};


#endif  /*POLL_POLLER_H*/