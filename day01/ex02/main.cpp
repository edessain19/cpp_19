#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie zebra = Zombie("Animal", "zebra");
    zebra.announce();

    ZombieEvent Zevent = ZombieEvent();
    Zevent.setZombieType("Alien");

    Zombie *xenomorph = Zevent.newZombie("XX121");
    xenomorph->announce();
    delete xenomorph;

    Zevent.setZombieType("Pokemon");
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    return (0);
}
