
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>(){};
		MutantStack(MutantStack const& copy) : std::stack<T>(copy){};
		virtual ~MutantStack() {};
		MutantStack& operator=(MutantStack const& copy)
		{
			if (this != &copy)
				this->c = copy.c;
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator 	iterator;
		iterator begin()
		{
			return this->c.begin();
		};
		iterator end()
		{
			return this->c.end();
		};
	private:
};

#endif
