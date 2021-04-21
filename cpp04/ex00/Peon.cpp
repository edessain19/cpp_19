
# include "Peon.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

// COPY
Peon::Peon(Peon const& copy): Victim(copy)
{
	std::cout << "Zog zog." << std::endl;
}

/*
** DESTRUCTOR
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Peon& Peon::operator=(Peon const& copy)
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

void Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}