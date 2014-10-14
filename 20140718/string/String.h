#ifndef STRING_H_
#define STRING_H_ 

#include <stddef.h>
#include <iostream>

class String
{
    friend std::ostream &operator<<(std::ostream &, const String &);
    friend std::istream &operator>>(std::istream &, String &);

    friend String operator+(const String &, const String &);
    friend String operator+(const String &, const char *);
    friend String operator+(const char *, const String &);

    friend bool operator<(const String &, const String &);
    friend bool operator>(const String &, const String &);
    friend bool operator<=(const String &, const String &);
    friend bool operator>=(const String &, const String &);
    friend bool operator==(const String &, const String &);
    friend bool operator!=(const String &, const String &);

    public:
        String();
        String(const char *);
        String(const String &);
        ~String();

        String &operator=(const char *);
        String &operator=(const String &);

        String &operator+=(const char *);
        String &operator+=(const String &);


        char &operator[](size_t index);
        char operator[](size_t index) const;

        void debug() const;
        size_t size() const;
        const char *c_str() const;

    private:
        char *str_;
};


inline std::ostream &operator<<(std::ostream &os, const String &s)
{
    //这里最好不要换行，把换行的选择权交给调用者
    return os << s.str_;
}

inline std::istream &operator>>(std::istream &is, String &s)
{
    /**
     * 输入失败时，不改变原对象。
     */
    char buf[1024];
    is >> buf;
    if(is){ //如果输入成功
        s = buf;
    }
    return is;
}


inline String operator+(const String &s1, const String &s2)
{
    //加法不改变原来的对象，所以这里生成一个新的局部对象，
    //将其返回出去
    String ret(s1);
    ret += s2;

    return ret;
}
inline String operator+(const String &s1, const char *s2)
{
    //调用了string _+ string的版本
    return s1 + String(s2); 
}

inline String operator+(const char *s1, const String &s2)
{
    return String(s1) + s2;
}

/* 这个重载是非法的
String operator+(const char *s1, const char *s2)
{
    return String(s1) + String(s2);
} */



#endif  /*STRING_H_*/
