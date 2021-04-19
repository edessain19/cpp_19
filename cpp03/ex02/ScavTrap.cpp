
# include "ScavTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ScavTrap::ScavTrap(): _name(""), _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50),
		_level(1), _meleeDamage(20), _rangedDamage(15), _armorReduction(3)
{
	std::cout << "constructor of ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(50),
		_level(1), _meleeDamage(20), _rangedDamage(15), _armorReduction(3)
{
	std::cout << " Overloaded constructors of ScavTrap is called" << std::endl;
}

/*
** DESTRUCTOR
*/

ScavTrap::~ScavTrap()
{
	std::cout << " Destructor of ScavTrap is called" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
ScavTrap& ScavTrap::operator=(ScavTrap const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void	ScavTrap::getHitPoints()
{
	std::cout << "SC4G-TP " << _name << " has " << _hitPoints << " hit points" << std::endl;
}

void	ScavTrap::getEnergyPoints()
{
	std::cout << "SC4G-TP " << _name << " has " << _energyPoints << " energy points" << std::endl;
}

void	ScavTrap::getLevel()
{
	std::cout << "SC4G-TP " << _name << " is level" << _level << std::endl;
}

void	ScavTrap::rangeAttack(std::string const &target)
{
	std::cout << "SC4G-TP " << _name << " attacks " << target << " from a distance, causing " << _rangedDamage << " damages !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4G-TP " << _name << " attacks " << target << " in melee, causing " << _meleeDamage << " damages !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int damages = amount - _armorReduction;
	if (damages < 0)
		damages = 0;
	std::cout << "SC4G-TP " << _name << " takes damage and loses " << damages << " hit points" << std::endl;
	_hitPoints = _hitPoints - (damages);
	if (_hitPoints < 0)
		_hitPoints = 0;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4G-TP " << _name << " regenerates " << amount << " hit points" << std::endl;

	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	_energyPoints += amount;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
}

void	ScavTrap::challengeNewcomer()
{
	int random;
	std::string challenges[5] = {"Become a jedi", "Become a sith", "Win the module race", "Kill Darth Sidious", "Kill darth Maul"};

	srand(time(NULL)); //If srand not initialized, random name will always be the same
	random = rand() % 5 + 0;
	std::cout << "Challenge : " << challenges[random] << std::endl;
}