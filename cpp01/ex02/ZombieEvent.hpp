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
	private:
		std::string		m_type;
		std::string		m_name;
	
	public:
		ZombieEvent();
		~ZombieEvent();

		Zombie*			newZombie(std::string name);
		Zombie			randomChump();
		void			setZombieType(Zombie &m, std::string type);
		void			announce() const;

};

#endif