
# include "Sorcerer.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Sorcerer::Sorcerer()
{
	
}

Sorcerer::Sorcerer(std::string name, std::string titre)
{
	_name = name;
	_title = titre;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

// COPY
Sorcerer::Sorcerer(Sorcerer const& copy)
{
	_name = copy._name;
	_title = copy._title;	
}

/*
** DESTRUCTOR
*/

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Sorcerer& Sorcerer::operator=(Sorcerer const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/


void		Sorcerer::Polymorph(Victim const & copy) const
{
	copy.getPolymorphed();
}

std::string	Sorcerer::getName(void) const
{
	return (this->Name);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & copy)
{
	o << "I am " << copy.getName() << " and i like otters!" << std::endl;
	return (o);
}