#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(std::string name, std::string type);
		~Zombie();

		void			advert() const;
		void			setType(std::string type);

	private:
		std::string		m_name;
		std::string		m_type;
};

#endif