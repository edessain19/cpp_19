
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string>

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string name = "SpongeBob");
		Character(Character const& copy);
		virtual ~Character();
		Character& operator=(Character const& copy);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria *_materia[4];


};

#endif
