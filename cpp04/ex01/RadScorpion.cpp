
# include "RadScorpion.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

// COPY
// RadScorpion::RadScorpion(RadScorpion const& copy)
// {
	
// }

/*
** DESTRUCTOR
*/

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
RadScorpion& RadScorpion::operator=(RadScorpion const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

