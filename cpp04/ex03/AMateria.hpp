
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const& copy);
		AMateria& operator=(AMateria const& copy);
		virtual ~AMateria();


		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
	
	protected:
		unsigned int _xp;
		std::string _type;
};

#endif
