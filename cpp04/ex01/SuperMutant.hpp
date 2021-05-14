
#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

# include <iostream>
# include <string>

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const& copy);
		virtual ~SuperMutant();
		SuperMutant& operator=(SuperMutant const& copy);
		
		virtual void takeDamage(int damage);

	private:


};

#endif
