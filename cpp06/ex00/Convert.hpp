
#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <limits>
# include <cmath>
# include <cctype>

# include <stdexcept>


	void cast_char(char c);
	void cast_int(int i);
	void cast_double(double d);
	void special_double(double d);
	void cast_float(float f);
	void special_float(float f);

	class wrongInput : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
#endif
