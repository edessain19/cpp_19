
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string>

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(Character const& copy);
		~Character();
		Character& operator=(Character const& copy);

	private:


};

#endif
