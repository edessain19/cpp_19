
# include "Enemy.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT

Enemy::Enemy()
{

}

Enemy::Enemy(int hp, std::string type) : _hp(hp), _type(type)
{
	
}

// COPY
Enemy::Enemy(Enemy const& copy)
{
	_hp = copy._hp;
	_type = copy._type;
}

/*
** DESTRUCTOR
*/

Enemy::~Enemy()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Enemy& Enemy::operator=(Enemy const& copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

int Enemy::getHP() const
{
	return (_hp);
}

std::string Enemy::getType() const
{
	return (_type);
}

void Enemy::takeDamage(int damage)
{
	if (_hp >= damage)
		_hp -= damage;
	else
		_hp = 0;
}

std::ostream &operator<<(std::ostream &flux, Enemy const& copy)
{
	flux << copy.getType() << " has " << copy.getHP() << " hp" << std::endl;
	return (flux);
}