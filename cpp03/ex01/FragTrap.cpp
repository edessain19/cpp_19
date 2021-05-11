# include "FragTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
FragTrap::FragTrap():  _name(""), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
			_maxEnergyPoints(100), _level(1), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
	std::cout << "constructor of FragTrap is called" << std::endl;
}

FragTrap::FragTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
			_maxEnergyPoints(100), _level(1), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
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
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
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