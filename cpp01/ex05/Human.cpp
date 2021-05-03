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

const Brain &Human::getBrain() const
{
	return m_brain;
}

const Brain *Human::identify() const
{
	return m_brain.identify();
}