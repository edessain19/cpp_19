
#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

# include <iostream>
# include <string>

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		virtual ~SuperTrap();
		SuperTrap& operator=(SuperTrap const& copy);

		void		getHitPoints();
		void		getEnergyPoints();
		void		getLevel();


};

#endif
