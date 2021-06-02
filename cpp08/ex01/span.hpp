
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

		void addNumber(unsigned int n);
		int shortestSpan();
		int longestSpan();
		std::vector<int>& getList();
		typedef std::vector<int>::iterator Iter;
		void addNumber(T un, T deux);


	private:
		span();
		unsigned int _n;
		std::vector<int> 	_list;
};

#endif
