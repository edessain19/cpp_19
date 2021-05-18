
#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const& copy);
		~Array();

		Array<T>& operator=(Array const& copy);
		T & operator[](unsigned int const& i);
		unsigned int	size(void) const;

	private:
		T				*_arr;
		unsigned int	_n;

};


#endif

template <typename T>
Array<T>::Array(): _arr(0), _n(0) {}

template<typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]()), _n(n) {}

