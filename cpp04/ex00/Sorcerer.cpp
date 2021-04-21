
# include "Sorcerer.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

// COPY
Sorcerer::Sorcerer(Sorcerer const& copy)
{
	_name = copy._name;
	_title = copy._title;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;

}

/*
** DESTRUCTOR
*/

Sorcerer::~Sorcerer()
{
std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Sorcerer& Sorcerer::operator=(Sorcerer const& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_title = copy._title;
		std::cout << " YOu are now my equal !! You Outstanding Sorcerer !!" << std::endl;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void        Sorcerer::introduction( void ) const
{
	std::cout << "I am " << _name << ", " << _title << ", and I like ponies!" << std::endl;
}

void        Sorcerer::polymorph(Victim const& copy) const
{
	copy.getPolymorphed();
}

std::ostream&   operator<<( std::ostream &flux, Sorcerer const& copy)
{
	copy.introduction();
	return flux;
}