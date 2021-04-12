#include "Zombie.hpp"

Zombie::~Zombie()
{
}

Zombie::Zombie()
{
	m_name = "Kevin";
	m_type = "divers";
}

void Zombie::SetZombie(std::string name, std::string type)
{
    m_name = name;
    m_type = type;
}

void Zombie::announce()
{
    std::cout << m_name << " " << m_type << " Braiiiiiiiinnnssss ....." << std::endl;
}