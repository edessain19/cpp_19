
# include "Weapon.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	_type = type;
}


/*
** DESTRUCTOR
*/

Weapon::~Weapon()
{
	
}

/*
** MEMBER FUNCTIONS
*/

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string Weapon::getType() const
{
	return (_type);
}