#include "Queue.h"
#include <assert.h>

Queue::Queue()
    :head_(NULL), tail_(NULL), size_(0)
{
}

Queue::Queue(const Queue &other)
    :head_(NULL), tail_(NULL), size_(0)
{
    //copy
    copyElements(other);
}

Queue &Queue::operator=(const Queue &other)
{
    if(this != &other)
    {
        //free
        clear();
        //copy
        copyElements(other);
    }
    return *this;
}

void Queue::copyElements(const Queue &other)
{
    for(NodePtr pt = other.head_; pt != NULL ; pt = pt->next_)
    {
        push(pt->data_); 
    }
}

Queue::~Queue()
{
    clear();
}

void Queue::push(int data){
    NodePtr pt = new Node;
    pt->data_ = data;
    pt->next_ = NULL;
    if(isEmpty()){
        head_ = tail_ = pt; 
    }else{
        tail_->next_ = pt;
        tail_ = pt;
    }
    size_++;
}

void Queue::pop(){
    assert(!isEmpty());
    NodePtr pt = head_;
    head_ = head_->next_;
    delete pt;
    size_--;
}

int Queue::top() const{
    assert(!isEmpty());
    return head_->data_;
}

void Queue::clear(){
    while(!isEmpty()){
        pop();
    }
}

bool Queue::isEmpty() const{
    return head_ == NULL;
}

size_t Queue::getSize() const{
    return size_;
}


