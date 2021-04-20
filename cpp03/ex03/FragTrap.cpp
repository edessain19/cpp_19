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
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/
void	FragTrap::getHitPoints()
{
	std::cout << "FR4G-TP " << _name << " has " << _hitPoints << " hit points" << std::endl;
}

void FragTrap::getEnergyPoints()
{
	std::cout << "FR4G-TP " << _name << " has " << _energyPoints << " energy points" << std::endl;
}

void FragTrap::getLevel()
{
	std::cout << "FR4G-TP " << _name << " is level" << _level << std::endl;
}

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