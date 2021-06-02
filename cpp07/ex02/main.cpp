#include <iostream>
#include <string>
#include "Array.hpp"

class Awesome {
    public:
    	Awesome( int n = 0 ) : _n( n ) {}
    	bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
    	bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
    	bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
    	bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
    	bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
	private:
    	int _n;
  };

int main(void)
{
	{
		std::cout << "Test with a class Awesome" << std::endl;
		Array<Awesome> a(12);
		Array<Awesome> b;

		for (unsigned int i = 0; i < 12; i++)
			a[i] = Awesome(i + 12);
		try
		{
			std::cout << "size b = " << b.size() << std::endl; 
			std::cout << "size a = " << a.size() << std::endl; ; 
			a[15] = Awesome(21);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::cout << "Test with char" << std::endl;
		unsigned x = 12;
		Array<char> a(x);
		Array<char> b;

		for (unsigned j = 0; j < a.size(); j++)
			a[j] = 97 + j;

		std::cout << "Array a -> ";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
		try
		{
			std::cout << "size b = " << b.size() << std::endl;
			std::cout << "size = " << a.size() << std::endl << "elem[5] = " << a[5] << std::endl << "elem[a.size() + 1] = " << a[x + 1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}	
	}
	return (0);
}