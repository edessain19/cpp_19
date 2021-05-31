# ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <stdexcept>
#include <algorithm>
#include <iterator>

template<typename T>
int easyfind(T& cont, int val)
{
	typename T::const_iterator iter;

	if (cont.empty())
		throw(std::exception());
	iter = std::find(cont.begin(), cont.end(), val);
	if (iter == cont.end())
		throw(std::exception());
	return (*iter);
}


# endif