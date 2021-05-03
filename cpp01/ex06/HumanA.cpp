
# include "HumanA.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
HumanA::HumanA()
{
	
}

HumanA::HumanA(std::string name, Weapon &type)
{
	_name = name;
	_weaponA = type;
}

// COPY
HumanA::HumanA(HumanA const& copy)
{
	
}

/*
** DESTRUCTOR
*/

HumanA::~HumanA()
{
	
}

/*
** MEMBER FUNCTIONS
*/

void HumanA::attack()
{
	// Use of reference to be able to get the type in the Weapon object
	std::cout << _name << " attacks with his " << _weaponA._type << std::endl;
}
