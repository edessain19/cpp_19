
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
ClapTrap()
{
	_name = name;
	_hitPoints = 50;
	_maxHitPoints = 50;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeDamage = 20;
	_rangedDamage = 15;
	_armorReduction = 3;
	
	std::cout << " Overloaded constructors of ScavTrap is called" << std::endl;
}

// COPY
ScavTrap::ScavTrap(ScavTrap const& copy)
{
	*this = copy;
	std::cout << " Copy of constructors called" << std::endl;
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
		_hitPoints = copy._hitPoints;
		_maxHitPoints = copy._maxHitPoints;
		_energyPoints = copy._energyPoints;
		_maxEnergyPoints = copy._maxEnergyPoints;
		_level = copy._level;
		_name = copy._name;
		_meleeDamage = copy._meleeDamage;
		_rangedDamage = copy._rangedDamage;
		_armorReduction = copy._armorReduction;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void	ScavTrap::challengeNewcomer()
{
	int random;
	std::string challenges[5] = {"Become a jedi", "Become a sith", "Win the module race", "Kill Darth Sidious", "Kill darth Maul"};

	srand(time(NULL)); //If srand not initialized, random name will always be the same
	random = rand() % 5 + 0;
	std::cout << "Challenge : " << challenges[random] << std::endl;
}