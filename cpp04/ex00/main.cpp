#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Wolf.hpp"


int main()
{
	// std::cout << std::endl << "--------------------   Sorcerer TESTS   -----------------" << std::endl;
	
	// Sorcerer	Gandalf("Gandalf", "the Grey");
	// Sorcerer	Dumbledor("Dumbledor", "Headmaster of Hogwarts");
	// std::cout << Gandalf;
	// Gandalf = Dumbledor;
	// std::cout << Dumbledor;

	// std::cout << std::endl << "---------------------   Victim TESTS   ------------------" << std::endl;
	// Wolf Milou("Milou");
	// Wolf Rantanplan("Rantanplan");
	// std::cout << Milou;
	// std::cout << Rantanplan;
	// Milou = Rantanplan;
	// std::cout << Milou;
	// std::cout << Rantanplan;

	std::cout << std::endl << "--------------------     GIVEN TESTS    -----------------" << std::endl;

	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

    return (0);
}