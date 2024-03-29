
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
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

// COPY
Victim::Victim(Victim const& copy)
{
	_name = copy._name;
	std::cout << "Some random victim called " << _name << " just appeared! " << std::endl;  
}

/*
** DESTRUCTOR
*/

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Victim& Victim::operator=(Victim const& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		std::cout << "All Victims are Equal !!" << std::endl;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void    Victim::introduction(void) const
{
	std::cout << "I am " << _name << " and I like otters!" << std::endl;
}

void    Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;   
}

std::ostream& operator<<( std::ostream &flux, Victim const& copy)
{
	copy.introduction();
	return (flux);
}