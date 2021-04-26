
# include "Cure.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Cure::Cure() : AMateria("cure")
{
	
}

// COPY
Cure::Cure(Cure const& copy) : AMateria("cure")
{
	_xp = copy.getXP();
}

/*
** DESTRUCTOR
*/

Cure::~Cure()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Cure& Cure::operator=(Cure const& copy)
{
	if (this != &copy)
	{
		_xp = copy.getXP();
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

Cure* Cure::clone() const
{
	return (new Cure(*this));
}
	
void Cure::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}