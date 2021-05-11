
# include "SuperTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
SuperTrap::SuperTrap():
FragTrap(), NinjaTrap()
{
	std::cout << "constructor of SuperTrap is called" << std::endl;
}

SuperTrap::SuperTrap(std::string name):
FragTrap(1), NinjaTrap(1)
{
	_name = name;
	_level = 1;
	std::cout << "overload constructor of SuperTrap is called" << std::endl;
}

/*
** DESTRUCTOR
*/

SuperTrap::~SuperTrap()
{
	std::cout << " Destructor of SuperTrap is called" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
SuperTrap& SuperTrap::operator=(SuperTrap const& copy)
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

std::string SuperTrap::getname(void) const
{
	return this->_name;
}

int SuperTrap::getHitPoint( void ) const
{
	return this->_hitPoints;
}

int SuperTrap::getMaxHitPoint( void ) const
{
	return this->_maxHitPoints;
}

int SuperTrap::getEnergyPoint( void ) const
{
	return this->_energyPoints;
}

int SuperTrap::getMaxEnergyPoint( void ) const
{
	return this->_maxEnergyPoints;
}

int SuperTrap::getLevel( void ) const
{
	return this->_level;
}

int SuperTrap::getMeleeDamage( void ) const
{
	return this->_meleeDamage;
}

int SuperTrap::getRangedDamage( void ) const
{
	return this->_rangedDamage;
}

int SuperTrap::getArmorReduction( void ) const
{
	return this->_armorReduction;
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangeAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}