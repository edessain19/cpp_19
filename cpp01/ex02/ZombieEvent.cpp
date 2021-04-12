#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    m_name = "";
    m_type = "";
}

ZombieEvent::~ZombieEvent()
{
}

void		ZombieEvent::announce()
{
    std::cout << m_name << " " << m_type << " Braiiiiiiiinnnssss ....." << std::endl;
}

void		ZombieEvent::setZombieType(std::string type)
{
    m_type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
    m_name = name;

    Zombie *newZombie = new Zombie;
    return (newZombie);
}

std::string		randomName()
{
	int i;
	std::string names[5] = {"Mich", "Rod", "Carl", "Humb", "Lio"};
	std::string name;

	srand(time(NULL));
	i = rand() % 5 + 1;
	name = names[i];
	return (name);
}

Zombie		ZombieEvent::randomChump()
{
	std::string name = randomName();
	Zombie randomZombie(name, "random");

	randomZombie.announce();
	return (randomZombie);
}