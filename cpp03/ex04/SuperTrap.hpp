
#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

# include <iostream>
# include <string>

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		virtual ~SuperTrap();
		SuperTrap& operator=(SuperTrap const& copy);
		
		std::string getname( void ) const;
		int getHitPoint( void ) const;
		int getMaxHitPoint( void ) const;
		int getEnergyPoint( void ) const;
		int getMaxEnergyPoint( void ) const;
		int getLevel( void ) const;
		int getMeleeDamage( void ) const;
		int getRangedDamage( void ) const;
		int getArmorReduction( void ) const;

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);

};

#endif
