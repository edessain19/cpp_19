#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    std::cout << "========= Test for class Zombie =========" << std::endl;
    Zombie Mich = Zombie("Mich", "Moche");
    Zombie Rody = Zombie("Rody");
    Mich.advert();
    Rody.advert();

    std::cout << "========= Test for class ZombieEvent =========" << std::endl;
    Zombie *mama;
    ZombieEvent event;
    mama = event.newZombie("Mama");
    event.setZombieType(*mama, "Dangerous");
    mama->advert();
    delete mama;

    std::cout << "========= Test for class ZombieEvent (random) =========" << std::endl;
    ZombieEvent random;
    random.randomChump();

    return (0);
}