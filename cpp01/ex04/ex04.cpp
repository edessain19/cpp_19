#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pointer;
	std::string &reference = str;

	pointer = &str;
	std::cout << "Pointer : " << *pointer << std::endl;
	std::cout << "Reference : " << reference << std::endl;
	return (0);
}