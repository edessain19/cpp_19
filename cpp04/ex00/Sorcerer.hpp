
#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <iostream>
# include <string>

# include "Victim.hpp"


class Sorcerer
{
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string titre);
		Sorcerer(Sorcerer const& copy);
		~Sorcerer();
		Sorcerer& operator=(Sorcerer const& copy);

		std::string	getIntro() const;
		void		Polymorph(Victim const & copy) const;
		std::string	getName(void) const;

	private:
		std::string _name;
		std::string _title;
		Sorcerer();
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & copy);

#endif
