
# include "Character.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Character::Character(std::string name) :_name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

// COPY
Character::Character(Character const& copy) : _name(copy._name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	*this = copy;
}

/*
** DESTRUCTOR
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			delete _materia[i];
	}
}

/*
** OPERATORS
*/

// ASSIGNATION
Character& Character::operator=(Character const& copy)
{
	int	i;

	if (this != &copy)
	{
		_name = copy._name;
		i = -1;
		while (++i < 4 && _materia[i])
			delete _materia[i];
		i = -1;
		while (++i < 4 && copy._materia[i])
			_materia[i] = copy._materia[i]->clone();
	}
	return (*this);
}

/*
** MEMBER FUNCTIONS
*/

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	int done = 0;
	while (i < 4 && !done)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			done = 1;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (_materia[idx])
		_materia[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0 && _materia[idx])
		_materia[idx]->use(target);
}