
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <unistd.h>

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap& operator=(FragTrap const& copy);

		void		getHitPoints();
		void		getEnergyPoints();
		void		getLevel();
		void		vaulthunter_dot_exe(std::string const & target);
};

#endif
