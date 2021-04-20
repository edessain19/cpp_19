
# include "Victim.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Victim::Victim()
{
	
}

Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

// COPY
Victim::Victim(Victim const& copy)
{
	
}

/*
** DESTRUCTOR
*/

Victim::~Victim()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Victim& Victim::operator=(Victim const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void	Victim::intro(void) const
{
	std::cout << "I am " << _name << " and i like otters!" << std::endl;
}

void	Victim::getPolymorphed(void) const
{
	std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & copy)
{
	copy.intro();
	return (o);
}