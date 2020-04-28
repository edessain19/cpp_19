#include "contact.hpp"

int main()
{
	Contact			contact[8];
	std::string		commande;
	bool			run;
	int				index;
	int				i;

	index = 0;
	run = true;
	while (run == true)
	{
		std::cout << "Que voulez vous faire ?\n";
		std::cout << "inserez ADD, SEARCH ou EXIT\n";
		std::getline(std::cin, commande);
		if (commande == "EXIT")
		{
			std::cout << "Stop Annuaire\n";
			run = false;
		}
		else if (commande == "ADD")
		{
			if (index > 8)
				std::cout << "l'annuaire est complet, impossible de rajouter un contact";
			else
			{
				contact[index].add_contact(index);
				index++;
			}
		}
		else if (commande == "SEARCH")
		{
			i = 0;
			while (i < index)
			{
				contact[i].show_contact(i);
				i++;
			}
			std::cout << "tapez l'index du contact souhaite: \n";
			std::getline(std::cin, commande);
			i = std::stoi(commande);
			if ((i <= 0 || i > 8) && i <= index)
				contact[i].show_index();
			else
				std::cout << "l'index n'existe pas...";
		}
		else
		{
			std::cout << "Mauvaise insertion, tapez ADD, SEARCH, EXIT\n";
			std::getline(std::cin, commande);
		}
	}
	return (0);
}
