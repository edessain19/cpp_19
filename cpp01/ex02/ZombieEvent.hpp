#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
#include <cstdlib>

#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();

		Zombie*			newZombie(std::string name);
		Zombie			randomChump();
		void			setZombieType(std::string type);
		void			announce();

	private:
		std::string		m_type;
		std::string		m_name;

};

#endif