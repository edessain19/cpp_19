
#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(Weapon const& copy);
		~Weapon();
		Weapon& operator=(Weapon const& copy);

	private:


};

#endif
