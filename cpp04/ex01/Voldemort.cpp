
# include "Voldemort.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Voldemort::Voldemort() : Enemy(800, "Black Magician")
{
	std::cout << "* Wingsssss *" << std::endl;
}

// COPY
// Voldemort::Voldemort(Voldemort const& copy)
// {
	
// }

/*
** DESTRUCTOR
*/

Voldemort::~Voldemort()
{
	std::cout << "* fraaaaaaaaa *" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Voldemort& Voldemort::operator=(Voldemort const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

