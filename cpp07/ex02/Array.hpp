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


template<typename T>
Array<T>::Array() : _array(0), _length(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _length(n) {}

template<typename T>
Array<T>::~Array(void)
{
    if (this->_array)
        delete this->_array;
}

#endif