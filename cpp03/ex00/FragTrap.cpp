# include "FragTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
FragTrap::FragTrap():  _name(""), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
		_level(1), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
	std::cout << "constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
		_level(1), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
	std::cout << " Overloaded constructors called" << std::endl;
}

// COPY
// FragTrap::FragTrap(FragTrap const& copy)
// {
// 	std::cout << " Copy of constructors called" << std::endl;
// }

/*
** DESTRUCTOR
*/

FragTrap::~FragTrap()
{
	std::cout << " Destructor called" << std::endl;
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
	std::cout << _name << " has " << _hitPoints << " hit points" << std::endl;
}

void FragTrap::getEnergyPoints()
{
	std::cout << _name << " has " << _energyPoints << " energy points" << std::endl;
}

void FragTrap::getLevel()
{
	std::cout << _name << " is level" << _level << std::endl;
}

void	FragTrap::rangeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " from a distance, causing " << _rangedDamage << " damages !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " in melee, causing " << _meleeDamage << " damages !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int damages = amount - _armorReduction;
	if (damages < 0)
		damages = 0;
	std::cout << "FR4G-TP " << _name << " takes damage and loses " << damages << " hit points" << std::endl;
	_hitPoints = _hitPoints - (damages);
	if (_hitPoints < 0)
		_hitPoints = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << _name << " regenerates " << amount << " hit points" << std::endl;

	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
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