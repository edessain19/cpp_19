
# include "ElderWand.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ElderWand::ElderWand() : AWeapon("Elder Wand", 10, 400) {}

// COPY
ElderWand::ElderWand(ElderWand const& copy)
{
	*this = copy;
}

/*
** DESTRUCTOR
*/

ElderWand::~ElderWand() {}

/*
** OPERATORS
*/

// ASSIGNATION
ElderWand& ElderWand::operator=(ElderWand const& copy)
{
	if (this != &copy)
	{
		AWeapon::operator=(copy);
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void ElderWand::attack(void) const
{
	std::cout << "* Avada kedavra *" << std::endl;
}