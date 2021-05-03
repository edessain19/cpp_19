#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	m_name = name;
	m_type = "Standard";
}

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type) {}

Zombie::~Zombie() {}

void Zombie::advert() const
{
    std::cout << m_name << " " << m_type << " Braiiiiiiiinnnssss ....." << std::endl;
}

void Zombie::setType(std::string type)
{
    m_type = type;
}