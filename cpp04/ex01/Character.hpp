
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string>

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Voldemort.hpp"
#include "ElderWand.hpp"

class Character
{
	public:
		Character(std::string const &name);
		Character(Character const& copy);
		virtual ~Character();
		Character& operator=(Character const& copy);

		void				recoverAP(void);
		void				equip(AWeapon *weapon);
		void				attack(Enemy *other);
		std::string const	getName() const;
		void				introduction(void) const;

	private:
		std::string _name;
		int			_ap;
		AWeapon		*_weapon;

};

std::ostream& operator<<(std::ostream &flux, Character const& other);

#endif
