
# include "SuperTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
SuperTrap::SuperTrap():
ClapTrap()
{
	std::cout << "constructor of SuperTrap is called" << std::endl;
}

SuperTrap::SuperTrap(std::string name):
ClapTrap(100, 100, 120, 120, 1, 60, 20, 5)
{
	_name = name;
	std::cout << "overload constructor of SuperTrap is called" << std::endl;
}

/*
** DESTRUCTOR
*/

SuperTrap::~SuperTrap()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
SuperTrap& SuperTrap::operator=(SuperTrap const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void	SuperTrap::getHitPoints()
{
	std::cout << "SUPER-TP " << _name << " has " << _hitPoints << " hit points" << std::endl;
}

void	SuperTrap::getEnergyPoints()
{
	std::cout << "SUPER-TP " << _name << " has " << _energyPoints << " energy points" << std::endl;
}

void	SuperTrap::getLevel()
{
	std::cout << "SUPER-TP " << _name << " is level" << _level << std::endl;
}
