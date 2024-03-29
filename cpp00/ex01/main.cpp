#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
    std::string     cmd;
    Phonebook       myPhonebook;

	while (1)
	{
		std::cout << "Enter your command: ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, cmd))
			return 0;
		for (int i = 0; cmd[i] != 0; i++)
			cmd[i] = std::toupper(cmd[i]);
		if (cmd == "ADD")
			myPhonebook.createContact();
		else if (cmd == "SEARCH")
		{
			if (myPhonebook.searchContact() == -1)
			{
				std::cout << "Goodbye!" << std::endl;
				break ;
			}
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			break ;
		}
		else
			std::cout << "This is not a valid command, try again" << std::endl;
	}
	return (0);
}