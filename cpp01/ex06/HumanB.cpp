
# include "HumanB.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
HumanB::HumanB()
{
	
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
	std::cout << _name << " attacks with his " << _weaponB->m_type << std::endl;
}

void HumanB::set_weapon(Weapon &weapon)
{
	_weaponB = &weapon;
}
