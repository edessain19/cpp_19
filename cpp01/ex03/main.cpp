#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	Zombie	paul = Zombie("Paul", "plante");
    ZombieEvent zombie_normal;
	ZombieEvent zombie_random;

	std::cout << "----- test Zombie ---------" << std::endl;
	paul.announce();

	std::cout << "----- test ZombieEvent normal ---------" << std::endl;
	zombie_normal.setZombieType("banal");
	zombie_normal.newZombie("Lio");
	zombie_normal.announce();

	std::cout << "----- test ZombieEvent normal ---------" << std::endl;
	zombie_random.randomChump();
	return (0);
}