
# include "AMateria.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
AMateria::AMateria(std::string const& type) : _xp(0), _type(type)
{
	
}

// COPY
// AMateria::AMateria(AMateria const& copy)
// {
// 	*this = copy;
// }

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
		_xp = copy._xp;
		_type = copy._type;
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