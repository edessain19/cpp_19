
# include "ClapTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ClapTrap::ClapTrap()
{
	_name = ""
	_hitPoints = 0;
	_maxHitPoints = 0;
	_energyPoints = 0;
	_maxEnergyPoints = 0;
	_level = 0;
	_meleeDamage = 0;
	_rangedDamage = 0;
	_armorReduction = 0;
	std::cout << "constructor of ClapTrap is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 0;
	_maxHitPoints = 0;
	_energyPoints = 0;
	_maxEnergyPoints = 0;
	_level = 0;
	_meleeDamage = 0;
	_rangedDamage = 0;
	_armorReduction = 0;
	std::cout << " Overloaded constructors of ClapTrap is called" << std::endl;
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
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

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