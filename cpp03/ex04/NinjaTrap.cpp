
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
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void	NinjaTrap::getHitPoints()
{
	std::cout << "NI4G-TP " << _name << " has " << _hitPoints << " hit points" << std::endl;
}

void	NinjaTrap::getEnergyPoints()
{
	std::cout << "NI4G-TP " << _name << " has " << _energyPoints << " energy points" << std::endl;
}

void	NinjaTrap::getLevel()
{
	std::cout << "NI4G-TP " << _name << " is level" << _level << std::endl;
}

///////////////////////////////

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