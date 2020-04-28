#include "contact.hpp"

void	Contact::add_contact(int total)
{
	index = total;
	std::cout << "Adding a contact:\nEnter First Name: ";
	std::getline(std::cin, FirstName);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, LastName);
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, Nickname);
	std::cout << "Enter Login: ";
	std::getline(std::cin, Login);
	std::cout << "Enter Postal Adress: ";
	std::getline(std::cin, Adress);
	std::cout << "Enter Email Adress: ";
	std::getline(std::cin, Email);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, Phone);
	std::cout << "Enter Birthday Date: ";
	std::getline(std::cin, Birthday);
	std::cout << "Enter Favorite Meal: ";
	std::getline(std::cin, Meal);
	std::cout << "Enter Underware Color: ";
	std::getline(std::cin, Underwear);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, Secret);
}

void	Contact::show_contact(int index)
{
	std::cout << setw(10) << index << "|" ;
	std::cout << setw(10) << FirstName << " |" ;
	std::cout << setw(10) << LastName << " |" ;
	std::cout <<  setw(10) << Login << " |" ;
	std::cout << "\n";
}

void	Contact::show_index()
{
	std::cout << setw(10) << index << "|";
	std::cout << setw(10) << FirstName << " |" ;
	std::cout << setw(10) << LastName << " |" ;
	std::cout << setw(10) << Login << " |" ;
	std::cout << setw(10) << Adress << " |" ;
	std::cout << setw(10) << Email << " |" ;
	std::cout << setw(10) << Phone << " |" ;
	std::cout << setw(10) << Birthday << " |" ;
	std::cout << setw(10) << Meal << " |" ;
	std::cout << setw(10) << Underwear << " |" ;
	std::cout << setw(10) << Secret << "|" ;
	std::cout << "\n";
}
