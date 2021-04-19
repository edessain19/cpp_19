
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <unistd.h>

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(ScavTrap const& copy);

		void		getHitPoints();
		void		getEnergyPoints();
		void		getLevel();
		void		challengeNewcomer();
};

#endif
