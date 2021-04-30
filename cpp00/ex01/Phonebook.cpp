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

int Phonebook::createContact()
{
	_contactNbr++;
	if (_contactNbr > 8)
	{
		std::cout << "Your Phonebook is full !" << std::endl;
        _contactNbr--;
		return -2;
	}
	if (!_contacts[_contactNbr].setFirstName())
        return (-1);
	if (!_contacts[_contactNbr].setLastName())
        return -1;
	if (!_contacts[_contactNbr].setNickname())
        return -1;
	if (!_contacts[_contactNbr].setLogin())
        return -1;
	if (!_contacts[_contactNbr].setPostalAddress())
        return -1;
	if (!_contacts[_contactNbr].setEmail())
        return -1;
	if (!_contacts[_contactNbr].setPhoneNumber())
        return -1;
	if (!_contacts[_contactNbr].setBirthday())
        return -1;
	if (!_contacts[_contactNbr].setFavoriteMeal())
        return -1;
	if (!_contacts[_contactNbr].setUnderwearColor())
        return -1;
	if (!_contacts[_contactNbr].setDarkestSecret())
        return -1;
    return 1;
}

void Phonebook::showContacts()
{
	int i = 0;

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
    inputUser--;
    if (_contactNbr < inputUser|| inputUser < 0)
    {
        std::cout << "This contact doesn't exist" << std::endl;
        std::cout << _contactNbr << std::endl;
        return ;
    }
    std::cout << "First name : " << _contacts[inputUser].getFirstName() << std::endl;
    std::cout << "Last name : " << _contacts[inputUser].getLastName() << std::endl;
    std::cout << "Nickname : " << _contacts[inputUser].getNickname() << std::endl;
    std::cout << "Login : " << _contacts[inputUser].getLogin() << std::endl;
    std::cout << "Postal address : " << _contacts[inputUser].getPostalAddress() << std::endl;
    std::cout << "Email : " << _contacts[inputUser].getEmail() << std::endl;
    std::cout << "Phone number : " << _contacts[inputUser].getPhoneNumber() << std::endl;
    std::cout << "Phone number : " << _contacts[inputUser].getBirthday() << std::endl;
    std::cout << "Favorite meal : " << _contacts[inputUser].getFavoriteMeal() << std::endl;
    std::cout << "Underwear color : " << _contacts[inputUser].getUnderwearColor() << std::endl;
    std::cout << "Darkest secret : " << _contacts[inputUser].getDarkestSecret() << std::endl;
}

bool Phonebook::isNumeric(std::string str) 
{
   for (unsigned long i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false;
      return true;
}

int Phonebook::searchContact()
{
    std::string     inputUser;

    if (_contactNbr == -1)
    {
        std::cout << "No contacts in your Phonebook, add one or exit!" << std::endl;
        return 0;
    }
    this->showContacts();
    std::cout << "Desired contact index: ";
    std::getline(std::cin, inputUser);
    while (inputUser == "" || !isNumeric(inputUser))
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Desired contact index: ";
        if (!std::getline(std::cin, inputUser))
            return 0;
    }
    this->showContact(std::stoi(inputUser));
    return 0;
}