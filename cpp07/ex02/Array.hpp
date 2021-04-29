#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        ~Array(void);
        Array(Array const& other);

    private:
        unsigned int    _length;
        T               *_array;

};

#endif