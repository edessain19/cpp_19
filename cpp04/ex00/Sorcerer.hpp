
#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <iostream>
# include <string>

#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const& copy);
		~Sorcerer();
		Sorcerer& operator=(Sorcerer const& copy);

		void	introduction( void ) const;
		void	polymorph(Victim const& copy) const;

	private:
		Sorcerer();
		std::string		_name;
		std::string		_title;
};

std::ostream& operator<<( std::ostream &flux, Sorcerer const& copy);

#endif
