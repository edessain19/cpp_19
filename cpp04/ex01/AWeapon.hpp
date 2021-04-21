
#ifndef AWEAPON_HPP
#define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	public:
		AWeapon(std::string name, int cost, int damage);
		AWeapon(AWeapon const& copy);
		virtual ~AWeapon();
		AWeapon& operator=(AWeapon const& copy);

		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;

	protected:
		std::string	_name;
		int			_cost;
		int			_damage;

};

std::ostream &operator<<(std::ostream &flux, AWeapon const& copy);


#endif
