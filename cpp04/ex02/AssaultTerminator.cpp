
# include "AssaultTerminator.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

// COPY
AssaultTerminator::AssaultTerminator(AssaultTerminator const& copy)
{
	std::cout << "* teleports from space *" << std::endl;
	(void)copy;
}

/*
** DESTRUCTOR
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const& copy)
{
	(void)copy;
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator());
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}