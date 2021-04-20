
# include "ScavTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ScavTrap::ScavTrap():
ClapTrap()
{
	std::cout << "constructor of ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): 
ClapTrap(50, 50, 50, 50, 1, 20, 15, 3)
{
	_name = name;
	// _hitPoints = 50;
	// _maxHitPoints = 50;
	// _energyPoints = 50;
	// _maxEnergyPoints = 50;
	// _level = 1;
	// _meleeDamage = 20;
	// _rangedDamage = 15;
	// _armorReduction = 3;
	std::cout << " Overloaded constructors of ScavTrap is called" << std::endl;
}

/*
** DESTRUCTOR
*/

ScavTrap::~ScavTrap()
{
	std::cout << " Destructor of ScavTrap is called" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
ScavTrap& ScavTrap::operator=(ScavTrap const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void	ScavTrap::getHitPoints()
{
	std::cout << "SC4G-TP " << _name << " has " << _hitPoints << " hit points" << std::endl;
}

void	ScavTrap::getEnergyPoints()
{
	std::cout << "SC4G-TP " << _name << " has " << _energyPoints << " energy points" << std::endl;
}

void	ScavTrap::getLevel()
{
	std::cout << "SC4G-TP " << _name << " is level" << _level << std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	int random;
	std::string challenges[5] = {"Become a jedi", "Become a sith", "Win the module race", "Kill Darth Sidious", "Kill darth Maul"};

	srand(time(NULL)); //If srand not initialized, random name will always be the same
	random = rand() % 5 + 0;
	std::cout << "Challenge : " << challenges[random] << std::endl;
}