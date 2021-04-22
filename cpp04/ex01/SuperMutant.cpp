
# include "SuperMutant.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
SuperMutant::SuperMutant() : Enemy(170, "Super Mutan")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

// COPY
// SuperMutant::SuperMutant(SuperMutant const& copy)
// {
	
// }

/*
** DESTRUCTOR
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
SuperMutant& SuperMutant::operator=(SuperMutant const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}