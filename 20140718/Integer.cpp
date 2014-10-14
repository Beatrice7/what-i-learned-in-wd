#include "Integer.h"


Integer::Integer(int data)
    :data_(data)
{
}

Integer::~Integer()
{
}

std::ostream &operator<<(std::ostream &os, const Integer &in)
{
    return os << in.data_;
}

Integer &Integer::operator++()
{
    //++i
    ++data_;
    return *this;
}



Integer Integer::operator++(int)
{
    Integer tmp(*this); //缓存之前的值
    ++data_;
    return tmp;
}










