
# include "AWeapon.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT

AWeapon::AWeapon()
{
	
}

AWeapon::AWeapon(std::string name, int cost, int damage) : _name(name), _cost(cost), _damage(damage)
{

}

// COPY
AWeapon::AWeapon(AWeapon const& copy) : _name(copy._name), _cost(copy._cost), _damage(copy._damage)
{

}

/*
** DESTRUCTOR
*/

AWeapon::~AWeapon() {}

/*
** OPERATORS
*/

// ASSIGNATION
AWeapon& AWeapon::operator=(AWeapon const& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_cost = copy._cost;
		_damage = copy._damage;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_cost);
}

int AWeapon::getDamage() const
{
	return (_damage);
}

std::ostream &operator<<(std::ostream &flux, AWeapon const& copy)
{
	flux << copy.getName();
	return (flux);
}