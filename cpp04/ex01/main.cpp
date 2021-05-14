#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

#include "Character.hpp"

int main()
{



	std::cout << std::endl << "--------------------     GIVEN TESTS    -----------------" << std::endl;
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	delete pr;
	delete pf;
	delete me;

	std::cout << std::endl << "--------------------     OTHER TESTS    -----------------" << std::endl;
	Character* dumbledor = new Character("Dumbledor");
	std::cout << *dumbledor;
	Enemy* jedusor = new Voldemort();
	AWeapon* wand = new ElderWand();
	dumbledor->equip(wand);
	std::cout << *dumbledor;
	std::cout << *jedusor;
	dumbledor->attack(jedusor);
	jedusor->takeDamage(wand->getDamage());
	std::cout << *dumbledor;
	std::cout << *jedusor;
	delete dumbledor;
	delete jedusor;
	delete wand;
	return 0;
}