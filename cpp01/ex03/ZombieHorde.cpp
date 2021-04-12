#include "Zombie.hpp"
#include "ZombieHorde.hpp"

std::string  randomName(int m_n)
{
    int i = 0;
    char name[m_n];

    srand(time(NULL));
    while (i < m_n)
    {
        name[i] = rand() % 26 + 97;
        i++;
    }
    name[i] = 0;
    return (std::string(name));
}

ZombieHorde::ZombieHorde(int n) : m_n(n)
{
	m_horde = new Zombie[m_n];

	for (int i = 0; i < m_n; i++)
	{
		sleep(1);
		m_horde[i].SetZombie(randomName(m_n), "Bad");
	}
}

ZombieHorde::~ZombieHorde()
{
    delete [] m_horde;
}

void ZombieHorde::announce()
{
    for (int i = 0; i < m_n; i++)
        m_horde[i].announce();
}