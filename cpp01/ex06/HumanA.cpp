
# include "HumanA.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
HumanA::HumanA()
{
	
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_name = name;
	_weaponA = weapon;
}

/*
** DESTRUCTOR
*/

HumanA::~HumanA()
{
	
}

HumanA& HumanA::operator=(HumanA const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void HumanA::attack()
{
	// Use of reference to be able to get the type in the Weapon object
	std::cout << _name << " attacks with his " << _weaponA.getType() << std::endl;
}
