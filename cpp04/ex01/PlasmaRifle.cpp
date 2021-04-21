
# include "PlasmaRifle.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	
}

// COPY
PlasmaRifle::PlasmaRifle(PlasmaRifle const& copy) : AWeapon(copy)
{
	*this = copy;
}

/*
** DESTRUCTOR
*/

PlasmaRifle::~PlasmaRifle()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& copy)
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

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
