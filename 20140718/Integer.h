#ifndef INTEGER_H_
#define INTEGER_H_ 

#include <iostream>

class Integer
{
    friend std::ostream &operator<<(std::ostream &, const Integer &);
    public:
        explicit Integer(int data);
        ~Integer();

        Integer &operator++();
        Integer operator++(int);
    private:
        int data_;
};

#endif  /*INTEGER_H_*/
