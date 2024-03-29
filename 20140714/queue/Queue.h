#ifndef _QUEUE_H_
#define _QUEUE_H_ 

#include <stddef.h>

//这是队列的结点
class Node{
    friend class Queue;
private:
    int data_;
    Node *next_;
};
typedef Node *NodePtr;


class Queue{
    public:
        Queue();
        ~Queue();
        void push(int data);
        void pop();
        int top() const;
        void clear();
        bool isEmpty() const;
        size_t getSize() const;
    private:
        NodePtr head_;
        NodePtr tail_;
        size_t size_;
};


#endif  /*_QUEUE_H_*/
