#include <iostream>
#include <pthread.h>
#include <unistd.h>
using namespace std;

class Thread
{
    public:
        typedef void *(*ThreadCallback) (void *);
        Thread(ThreadCallback callback);
        void start();
        void join();
    private:
        ThreadCallback callback_;
        pthread_t tid_;
};

Thread::Thread(ThreadCallback callback)
    :tid_(0), callback_(callback)
{
}

void Thread::start()
{
    pthread_create(&tid_, NULL, callback_, NULL);
}

void Thread::join()
{
    pthread_join(tid_, NULL);
}


void *threadFunc(void *arg)
{
    while(1)
    {
        sleep(1);
        cout << "hello " << endl;
    }
}


int main(int argc, const char *argv[])
{
    Thread t(threadFunc);
    t.start();
    t.join();
    return 0;
}
