
# include "NinjaTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
NinjaTrap::NinjaTrap():
ClapTrap()
{
	std::cout << "constructor of NinjaTrap is called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): 
ClapTrap(60, 60, 120, 120, 1, 60, 5, 0)
{
	_name = name;
	std::cout << " Overloaded constructors of NinjaTrap is called" << std::endl;
}

NinjaTrap::NinjaTrap(int i)
{
	(void) i;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeDamage = 60;
}

// COPY
NinjaTrap::NinjaTrap(NinjaTrap const& copy)
{
	*this = copy;
	std::cout << " Copy of constructors called" << std::endl;
}

/*
** DESTRUCTOR
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << " Destructor of NinjaTrap is called" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
NinjaTrap& NinjaTrap::operator=(NinjaTrap const& copy)
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

void NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
  	std::cout << "Ninjaa_ninja_ninja " << _name << " attacks " << target.getName() << " causing "<< _rangedDamage << " points of damage " << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
  	std::cout << "Ninja_clap_clap " << _name << " attacks " << target.getName() << " causing "<< _rangedDamage << " points of damage " << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target)
{
  	std::cout << "Ninja_frag_frag " << _name << " attacks " << target.getName() << " causing "<< _rangedDamage << " points of damage " << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
  	std::cout << "Ninja_scav_scav " << _name << " attacks " << target.getName() << " causing "<< _rangedDamage << " points of damage " << std::endl;
}