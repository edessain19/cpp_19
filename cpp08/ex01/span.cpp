
# include "span.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
span::span() {}

span::span(unsigned int nMax): _nMax(nMax) {}

// COPY
span::span(span const& copy): _nMax(copy._nMax)
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
		_nMax = copy._nMax;
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

void span::addNumber(unsigned int n)
{
	if (_list.size() >= _nMax)
		throw std::exception();
	_list.push_back(n);
}
void span::addNumber(Iter un, Iter deux)
{
	for (Iter i = un; i != deux; i++)
		addNumber(*i);
}

int span::shortestSpan(void)
{
	if (_list.empty() || _list.size() == 1)
		throw std::exception();
	int span_value = *(_list.end() - 1);
	for (std::vector<int>::iterator it = _list.begin() + 1; it != _list.end(); it++)
	{
		if (abs(*(it - 1) - *it) < span_value)
			span_value = abs(*(it - 1) - *it);
	}
	return (span_value);
}

int span::longestSpan(void)
{
	if (_list.empty() || _list.size() == 1)
		throw std::exception();
	int r = abs(_list.front() - _list.back());
	return (r);
}

std::vector<int>&	span::getVector()
{
	return (_list);
}