
# include "HumanB.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
HumanB::HumanB()
{
	
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

// COPY
HumanB::HumanB(HumanB const& copy)
{
	
}

/*
** DESTRUCTOR
*/

HumanB::~HumanB()
{
	
}

/*
** MEMBER FUNCTIONS
*/

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weaponB->gettype() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weaponB = &weapon;
}
