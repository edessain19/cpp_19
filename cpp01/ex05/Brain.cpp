
# include "Brain.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Brain::Brain()
{
}

/*
** DESTRUCTOR
*/

Brain::~Brain()
{	
}

/*
** OPERATORS
*/

// ASSIGNATION
Brain& Brain::operator=(Brain const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

const Brain *Brain::identify() const
{
	return (this);
}