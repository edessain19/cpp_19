
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

template<typename T>
Array<T>::Array(Array<T> const& copy)
{
	if (this->_arr)
		delete[] this->_arr;
	this->_arr = new T[copy.size()];
	for (int i = 0; i < copy._n; i++)
		this->_arr[i] = copy._arr[i];
	_n = copy._n;
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_arr)
		delete[] _arr;
}

template<typename T>
Array<T>& Array<T>::operator=(Array<T> const& copy)
{
	if (this != &copy)
	{
		if (_arr)
			delete[] _arr;
		_arr = new T[copy._n];
		for (unsigned int i = 0; i < copy.size(); i++)
			_arr[i] = copy._arr[i];
		_n = copy._n;
	}
	return (*this);
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (_n);
}

template<typename T>
T & Array<T>::operator[](unsigned int const& i)
{
	if (i >= _n)
		throw std::exception();
	return (_arr[i]);
}