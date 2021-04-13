# include "Brain.hpp"
# include "Human.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Human::Human()
{
	std::cout << "Human++" << std::endl;
}

/*
** DESTRUCTOR
*/

Human::~Human()
{
	std::cout << "Human--" << std::endl;

}

/*
** OPERATORS
*/

// ASSIGNATION
Human& Human::operator=(Human const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

Brain &Human::getBrain()
{
	return m_brain;
}

Brain *Human::identify()
{
	return m_brain.identify();
}