#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T &x, T &y)
{
    T tmp = x;
    T tmp2 = y;
    x = tmp2;
    y = tmp;
}

template<typename T>
T & min(T & x, T & y)
{
    if (x < y)
        return x;
    else
        return y;
}

template<typename T>
T & max(T & x, T & y)
{
    if (x > y)
        return x;
    else
        return y;
}

# endif