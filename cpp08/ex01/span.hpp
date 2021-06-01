
#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <algorithm>
# include <vector>
# include <iterator>
# include <list>

class span
{
	public:
		span(unsigned int n);
		span(span const& copy);
		~span();
		span& operator=(span const& copy);

		void	addNumber(int )

	private:
		span();
		unsigned int _n;
		std::vector<int> 	_list;
};

#endif
