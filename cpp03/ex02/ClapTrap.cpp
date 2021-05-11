
# include "ClapTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ClapTrap::ClapTrap()
{
	std::cout << "constructor of ClapTrap is called" << std::endl;
}

// ClapTrap::ClapTrap()
// {
// 	std::cout << " Overloaded constructors of ClapTrap is called" << std::endl;
// }

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
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

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
	std::cout << "Cl4G-TP " << _name << " attacks " << target << " from a distance, causing " << _rangedDamage << " damages !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "Cl4G-TP " << _name << " attacks " << target << " in melee, causing " << _meleeDamage << " damages !" << std::endl;
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