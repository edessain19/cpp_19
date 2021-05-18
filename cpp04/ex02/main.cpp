#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	{	
		std::cout << "----------------- Given Tests --------------" << std::endl;
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	{
	    std::cout << "_________________________More tests___________________________" << std::endl;
		std::cout << "________Copy constructor" << std::endl;

		ISpaceMarine *albert = new TacticalMarine;
		ISpaceMarine *etienne = new AssaultTerminator;
		ISpaceMarine *joseph = new AssaultTerminator;
		ISquad *test = new Squad;

		test->push(albert);
		test->push(etienne);
		test->push(etienne); // should not push (2x the same)
		test->push(joseph);
		test->push(nullptr); // should not add (null)

		ISquad *test_copy(test);
		std::cout << test << std::endl;
		std::cout << test_copy << std::endl;

		for (int i = 0; i < test->getCount(); ++i)
		{
			ISpaceMarine* cur = test->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}

	}

}