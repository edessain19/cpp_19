
#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const& copy);
		~Fixed();
		Fixed& operator=(Fixed const& copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int 				_fixedValue;
		static const int 	_bitsNbr;

};

#endif
