
# include "Peon.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Peon::Peon()
{

}

Peon::Peon(std::string name)
{
	_name = name;
	std::cout << _name << " said : Zog zog" << std::endl;
}

// COPY
Peon::Peon(Peon const& copy) : Victim(copy)
{
	
}

/*
** DESTRUCTOR
*/

Peon::~Peon()
{
	std::cout << _name << " said : Bleuark..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Peon& Peon::operator=(Peon const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void	Peon::getPolymorphed(void) const
{
	std::cout << this->Name << " was just polymorphed into a pink pony!" << std::endl;
}