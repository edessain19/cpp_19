
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
	std::cout << _name << " attacks with his " << _weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weaponB = &weapon;
}
