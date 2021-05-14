
#ifndef ELDERWAND_HPP
#define ELDERWAND_HPP

# include <iostream>
# include <string>

# include "AWeapon.hpp"

class ElderWand : public AWeapon
{
	public: 
		ElderWand();
		ElderWand(ElderWand const& copy);
		virtual ~ElderWand();
		ElderWand& operator=(ElderWand const& copy);
		
		virtual void attack(void) const;
	private:


};

#endif
