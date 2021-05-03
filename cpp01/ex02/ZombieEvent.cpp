#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    m_name = "Henry";
    m_type = "standard";
}

ZombieEvent::~ZombieEvent()
{
}

void		ZombieEvent::announce() const
{
    std::cout << m_name << " " << m_type << " Braiiiiiiiinnnssss ....." << std::endl;
}

void		ZombieEvent::setZombieType(Zombie &m, std::string type)
{
    m.setType(type);
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name));
}

std::string		randomName()
{
	int i;
	std::string names[5] = {"Mich", "Rod", "Carl", "Humb", "Lio"};
	std::string name;

	srand(time(NULL));
	i = rand() % 5;
	name = names[i];
	return (name);
}

Zombie		ZombieEvent::randomChump()
{
	std::string name = randomName();
	Zombie randomZombie(name, "random");
	randomZombie.advert();

	return (randomZombie);
}