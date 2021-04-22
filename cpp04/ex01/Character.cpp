
# include "Character.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(0)
{
	
}

// COPY
Character::Character(Character const& copy)
{
	_name = copy._name;
	_ap = copy._ap;
	_weapon = copy._weapon;
}

/*
** DESTRUCTOR
*/

Character::~Character()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Character& Character::operator=(Character const& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_ap = copy._ap;
		_weapon = copy._weapon;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Character::recoverAP(void)
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *copy)
{
	if (_weapon && _ap >= _weapon->getAPCost())
	{
		std::cout << this->_name << " attacks " << copy->getType()
				  << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		_ap -= _weapon->getAPCost();
		copy->takeDamage(_weapon->getDamage());
		if (copy->getHP() <= 0)
			delete copy;
	}
}

std::string const Character::getName() const
{
	return (_name);
}

void Character::introduction(void) const
{

	std::cout << _name << " has " << _ap << " AP";
	if (!_weapon)
		std::cout << " and is unarmed" << std::endl;
	else
		std::cout << " and wields a " << _weapon->getName() << std::endl;
}

std::ostream &operator<<(std::ostream &flux, Character const &other)
{
	other.introduction();
	return (flux);
}