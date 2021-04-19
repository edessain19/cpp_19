
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string>
#include <unistd.h>

class FragTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		// FragTrap(FragTrap const& copy);
		~FragTrap();
		FragTrap& operator=(FragTrap const& copy);

		void		getHitPoints();
		void		getEnergyPoints();
		void		getLevel();
		void		rangeAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);

	private:
		std::string	_name;
		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;
		int			_meleeDamage;
		int			_rangedDamage;
		int			_armorReduction;
};

#endif
