
# include "TacticalMarine.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

// COPY
TacticalMarine::TacticalMarine(TacticalMarine const& copy)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	(void)copy;
}

/*
** DESTRUCTOR
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
TacticalMarine& TacticalMarine::operator=(TacticalMarine const& copy)
{
	(void)copy;
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

ISpaceMarine* TacticalMarine::clone() const
{
	return (new TacticalMarine());
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}