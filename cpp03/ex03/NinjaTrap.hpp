
#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include <iostream>
# include <string>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string);
		~NinjaTrap();
		NinjaTrap& operator=(NinjaTrap const& copy);

		void		getHitPoints();
		void		getEnergyPoints();
		void		getLevel();

		void		ninjaShoebox(NinjaTrap const &target);
		void		ninjaShoebox(ClapTrap const &target);
		void		ninjaShoebox(ScavTrap const &target);
		void		ninjaShoebox(FragTrap const &target);
	
	private:


};

#endif
