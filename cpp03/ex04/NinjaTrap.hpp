
#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include <iostream>
# include <string>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(int i);
		NinjaTrap(NinjaTrap const& copy);
		~NinjaTrap();
		NinjaTrap& operator=(NinjaTrap const& copy);

		void		ninjaShoebox(NinjaTrap const &target);
		void		ninjaShoebox(ClapTrap const &target);
		void		ninjaShoebox(ScavTrap const &target);
		void		ninjaShoebox(FragTrap const &target);
	
	private:


};

#endif
