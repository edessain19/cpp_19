
# include "Wolf.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Wolf::Wolf(std::string name) : Victim(name)
{
	std::cout << " Aouuuuh  Aouuuuh." << std::endl;
}

// COPY
Wolf::Wolf(Wolf const& copy): Victim(copy)
{
	std::cout << " Aouuuuh Aouuuuh." << std::endl;
}

/*
** DESTRUCTOR
*/

Wolf::~Wolf()
{
	std::cout << "Grrrr..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Wolf& Wolf::operator=(Wolf const& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Wolf::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cat!" << std::endl << "miaou miaou..." <<std::endl;
}