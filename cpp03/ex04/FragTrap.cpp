# include "FragTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
FragTrap::FragTrap():
ClapTrap()
{
	std::cout << "constructor of FragTrap is called" << std::endl;
}

FragTrap::FragTrap(std::string name):
ClapTrap(100, 100, 100, 100, 1, 30, 20, 5)
{
	_name = name;
	std::cout << " Overloaded constructors of FragTrap is called" << std::endl;
}

FragTrap::FragTrap(int i)
{
	(void) i;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_rangedDamage = 20;
	_armorReduction = 5;
	std::cout << " Overloaded constructors of FragTrap is called" << std::endl;
}

// COPY
FragTrap::FragTrap(FragTrap const& copy)
{
	*this = copy;
	std::cout << " Copy of constructors called" << std::endl;
}

/*
** DESTRUCTOR
*/

FragTrap::~FragTrap()
{
	std::cout << " Destructor of FragTrap is called" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
FragTrap& FragTrap::operator=(FragTrap const& copy)
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int random;
	std::string attacks[5][2] = {{"Breaking Swipe", "30"}, {"Aeroblast", "85"}, {"Steel Wing", "20"}, {"Aqua Jet", "15"}, {"Fire Pledge", "18"}};
	if (_energyPoints < 25)
	{
		std::cout << _name << " can't attack, his energy level is too low" << std::endl; 
		return ;
	}
	_energyPoints -= 25;
	srand(time(NULL)); //If srand not initialized, random name will always be the same
	random = rand() % 5 + 0;
	std::cout << _name << " attacks " << target << " with '" << attacks[random][0] << "' causing " << attacks[random][1] << " points of damage " << std::endl;
}