
# include "span.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
span::span() {}

span::span(unsigned int n): _n(n) {}

// COPY
span::span(span const& copy): _n(copy._n)
{
	if (!_list.empty())
		_list.erase(_list.begin(), _list.end());
	for (unsigned long i = 0; i < copy._list.size(); i++)
		_list.push_back(_list[i]);
}

/*
** DESTRUCTOR
*/

span::~span() {}

/*
** OPERATORS
*/

// ASSIGNATION
span& span::operator=(span const& copy)
{
	if (this != &copy)
	{
		_n = copy._n;
		if (!_list.empty())
			_list.erase(_list.begin(), _list.end());
		for (unsigned long i = 0; i < copy._list.size(); i++)
			_list.push_back(_list[i]);
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

