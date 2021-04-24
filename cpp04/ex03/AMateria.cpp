
# include "AMateria.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
AMateria::AMateria(std::string const& type) : _type(type), _xp(0)
{
	
}

// COPY
AMateria::AMateria(AMateria const& copy)
{
	*this = copy;
}

/*
** DESTRUCTOR
*/

AMateria::~AMateria()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
AMateria& AMateria::operator=(AMateria const& copy)
{
	if (this != &copy)
	{
		_type = copy._type;
		_xp = copy._xp;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string const& AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}