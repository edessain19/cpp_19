
#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include <string>

# include "AMaetria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const& copy);
		~Ice();
		Ice& operator=(Ice const& copy);

		virtual Ice* clone() const;
		virtual void use(ICharacter& taget);
	private:


};

#endif
