#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
	_contactNbr = -1;
}

Phonebook::~Phonebook()
{
    /* Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Contact. Le destructeur est donc inutile.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet. */
}

void Phonebook::createContact()
{
	_contactNbr++;
	if (_contactNbr > 7)
	{
		std::cout << "Your Phonebook is full !" << std::endl;
		return ;
	}
	_contacts[_contactNbr].setFirstName();
	_contacts[_contactNbr].setLastName();
	_contacts[_contactNbr].setNickname();
	_contacts[_contactNbr].setLogin();
	_contacts[_contactNbr].setPostalAddress();
	_contacts[_contactNbr].setEmail();
	_contacts[_contactNbr].setPhoneNumber();
	_contacts[_contactNbr].setBirthday();
	_contacts[_contactNbr].setFavoriteMeal();
	_contacts[_contactNbr].setUnderwearColor();
	_contacts[_contactNbr].setDarkestSecret();
}

void Phonebook::showContacts()
{
	int i = 0;

	std::cout << "Enter your contact number : " << std::endl;
	std::cout << " |First Name| Last Name|  Nickname|" << std::endl;
	while (i <= _contactNbr)
	{
		std::cout << i + 1 << "|";
		std::cout << std::setw(10) << _contacts[i].getFirstNameFormatted() << "|";
		std::cout << std::setw(10) << _contacts[i].getLastNameFormatted() << "|";
		std::cout << std::setw(10) << _contacts[i].getNicknameFormatted() << "|" << std::endl;
	i++;
	}
}

void Phonebook::showContact(int inputUser)
{
    if (_contactNbr < inputUser - 1)
    {
        std::cout << "This contact doesn't exist" << std::endl;
        return ;
    }
    std::cout << "First name : " << _contacts[inputUser - 1].getFirstName() << std::endl;
    std::cout << "Last name : " << _contacts[inputUser - 1].getLastName() << std::endl;
    std::cout << "Nickname : " << _contacts[inputUser - 1].getNickname() << std::endl;
    std::cout << "Login : " << _contacts[inputUser - 1].getLogin() << std::endl;
    std::cout << "Postal address : " << _contacts[inputUser - 1].getPostalAddress() << std::endl;
    std::cout << "Email : " << _contacts[inputUser - 1].getEmail() << std::endl;
    std::cout << "Phone number : " << _contacts[inputUser - 1].getPhoneNumber() << std::endl;
    std::cout << "Phone number : " << _contacts[inputUser - 1].getBirthday() << std::endl;
    std::cout << "Favorite meal : " << _contacts[inputUser - 1].getFavoriteMeal() << std::endl;
    std::cout << "Underwear color : " << _contacts[inputUser - 1].getUnderwearColor() << std::endl;
    std::cout << "Darkest secret : " << _contacts[inputUser - 1].getDarkestSecret() << std::endl;
}

bool Phonebook::isNumeric(std::string str) 
{
   for (unsigned long i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false;
      return true;
}

void Phonebook::searchContact()
{
    std::string     inputUser;

    if (_contactNbr == -1)
    {
        std::cout << "No contacts in your Phonebook, add one or exit!" << std::endl;
        return ;
    }
    this->showContacts();
    std::getline(std::cin, inputUser);
    while (inputUser == "" || !isNumeric(inputUser))
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Desired contact index: ";
        std::getline(std::cin, inputUser);
    }
    this->showContact(std::stoi(inputUser));
}