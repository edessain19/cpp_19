#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
#include <cstdlib>

class Zombie
{
	public:
		Zombie();
		~Zombie();

		void			SetZombie(std::string name, std::string type);
		void			announce();

	private:
		std::string		m_name;
		std::string		m_type;
};

#endif