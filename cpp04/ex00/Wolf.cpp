
# include "Wolf.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Wolf::Wolf()
{
	
}

Wolf::Wolf(std::string name)
{
	_name = name;
	std::cout << _name << " said : rrrh I'm an aplha" << std::endl;
}

// COPY
Wolf::Wolf(Wolf const& copy) : Victim(copy)
{
	
}

/*
** DESTRUCTOR
*/

Wolf::~Wolf()
{
	std::cout << _name << " said : argh..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Wolf& Wolf::operator=(Wolf const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void	Wolf::getPolymorphed(void) const
{
	std::cout << _name << " was just polymorphed into a Chiwawa!" << std::endl;
}