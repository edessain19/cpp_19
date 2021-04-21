#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
// #include "Wolf.hpp"


int main()
{
	std::cout << std::endl << "--------------------     GIVEN TESTS    -----------------" << std::endl;

	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

    return (0);
}