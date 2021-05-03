#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

void ponyOnTheStack();
void ponyOnTheHeap();

class Pony
{
	public:
		Pony();
		~Pony();
	
		void		set_name(std::string str);
		std::string	get_name();

	private:
		std::string		_name;
};

#endif