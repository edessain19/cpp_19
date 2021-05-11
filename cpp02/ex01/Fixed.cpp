# include "Fixed.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Fixed::Fixed() : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedValue = (i << _bitsNbr);
}

Fixed::Fixed(const float i)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedValue = roundf(i * (1 << _bitsNbr));
}

// COPY
Fixed::Fixed(Fixed const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

/*
** DESTRUCTOR
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Fixed& Fixed::operator=(Fixed const& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
	{
		
	}
	_fixedValue = copy.getRawBits();
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedValue);
} 

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedValue = raw;
}

float Fixed::toFloat(void) const
{
	// By dividing we make an equivalent of fixedValue << bitsNbr
	return (_fixedValue / (float)(1 << _bitsNbr));
}

int Fixed::toInt(void) const
{
	// We shift the binary point from position fixedValue to position 0
	return (_fixedValue >> _bitsNbr);
}

//Goal is to be able to insert into output streams like std::cout, it returns the output stream with its floating point inserted in it.
std::ostream &operator<<(std::ostream &output_stream, const Fixed &f)
{
  return (output_stream << f.toFloat());
}


// << >> shifting can be used to change the binary point position.
// Casting can also be used to set the binary point at a certain position, 
// if you cast to int you set the binary point to position zero

// << Takes two numbers, left shifts the bits of the first operand, 
// the second operand decides the number of places to shift.
// (x<<y) is equivalent to multiplying x with 2^y.
// Right shifting, shifts bytes to the right and is equivalent to dividing x with 2^y