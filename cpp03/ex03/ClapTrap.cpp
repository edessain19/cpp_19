
# include "ClapTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ClapTrap::ClapTrap()
{
	std::cout << "constructor of ClapTrap is called" << std::endl;
}

ClapTrap::ClapTrap(int hitpoints, int maxpoints, int energy, int maxenergy,
	int level, int melee, int range, int armor):
_hitPoints(hitpoints), _maxHitPoints(maxpoints), _energyPoints(energy),
_maxEnergyPoints(maxenergy), _level(level), _meleeDamage(melee), _rangedDamage(range), _armorReduction(armor)
{
	std::cout << " constructor of ClapTrap is called" << std::endl;
}

// COPY
ClapTrap::ClapTrap(ClapTrap const& copy)
{
	*this = copy;
	std::cout << " Copy of constructors called" << std::endl;
}

/*
** DESTRUCTOR
*/

ClapTrap::~ClapTrap()
{
	std::cout << " Destructor of ClapTrap is called" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
ClapTrap& ClapTrap::operator=(ClapTrap const& copy)
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

std::string ClapTrap::getName() const
{
	return (_name);
}

void	ClapTrap::getHitPoints()
{
	std::cout << "Cl4G-TP " << _name << " has " << _hitPoints << " hit points" << std::endl;
}

void	ClapTrap::getEnergyPoints()
{
	std::cout << "Cl4G-TP " << _name << " has " << _energyPoints << " energy points" << std::endl;
}

void	ClapTrap::getLevel()
{
	std::cout << "Cl4G-TP " << _name << " is level" << _level << std::endl;
}

void	ClapTrap::rangeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " from a distance, causing " << _rangedDamage << " damages !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " in melee, causing " << _meleeDamage << " damages !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int damages = amount - _armorReduction;
	if (damages < 0)
		damages = 0;
	std::cout << "CL4G-TP " << _name << " takes damage and loses " << damages << " hit points" << std::endl;
	_hitPoints = _hitPoints - (damages);
	if (_hitPoints < 0)
		_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Cl4G-TP " << _name << " regenerates " << amount << " hit points" << std::endl;

	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
}