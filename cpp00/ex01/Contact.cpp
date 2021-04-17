#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setFirstName()
{
	std::string name;

	std::cout << "First name: ";
	std::cin.ignore();
	std::getline(std::cin, name);
	while (name == "")
	{
		std::cout << "Wrong input" << std::endl;
		std::cout << "First name: ";
		std::getline(std::cin, name);
	}
	_firstName = name;
}

void Contact::setLastName()
{
    std::string name;

    std::cout << "Last name: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Last name: ";
        std::getline(std::cin, name);
    }
    _lastName = name;
}

void Contact::setNickname()
{
    std::string name;

    std::cout << "Nickname: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Nickname: ";
        std::getline(std::cin, name);
    }
    _nickname = name;
}

void Contact::setLogin()
{
    std::string name;

    std::cout << "Login: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Login: ";
        std::getline(std::cin, name);
    }
    _login = name;
}

void Contact::setPostalAddress()
{
    std::string name;

    std::cout << "Postal Address: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Postal Address: ";
        std::getline(std::cin, name);
    }
    _postalAddress = name;
}

bool Contact::is_email(std::string str)
{
    unsigned long i = 0;

    while (i < str.length())
    {
        if (str[i] == '@')
            return (true);
        i++;
    }
    return (false);
}

void Contact::setEmail()
{
    std::string name;

    std::cout << "Email: ";
    std::getline(std::cin, name);
    while (!is_email(name))
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Email: ";
        std::getline(std::cin, name);
    }
    _email = name;
}

void Contact::setPhoneNumber()
{
    std::string name;

    std::cout << "Phone number: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Phone number: ";
        std::getline(std::cin, name);
    }
    _phoneNumber = name;
}

void Contact::setBirthday()
{
    std::string name;

    std::cout << "Birthday: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Birthday: ";
        std::getline(std::cin, name);
    }
    _birthday = name;
}

void Contact::setFavoriteMeal()
{
    std::string name;

    std::cout << "Favorite meal: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Favorite meal: ";
        std::getline(std::cin, name);
    }
    _favoriteMeal = name;
}

void Contact::setUnderwearColor()
{
    std::string name;

    std::cout << "Underwear color: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Underwear color: ";
        std::getline(std::cin, name);
    }
    _underwearColor = name;
}

void Contact::setDarkestSecret()
{
    std::string name;

    std::cout << "Darkest secret: ";
    std::getline(std::cin, name);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Darkest secret: ";
        std::getline(std::cin, name);
    }
    _darkestSecret = name;
}

std::string Contact::getFirstName() const { return _firstName; }
std::string Contact::getLastName() const { return _lastName; }
std::string Contact::getNickname() const { return _nickname; }
std::string Contact::getLogin() const { return _login; }
std::string Contact::getPostalAddress() const { return _postalAddress; }
std::string Contact::getEmail() const { return _email; }
std::string Contact::getPhoneNumber() const { return _phoneNumber; }
std::string Contact::getBirthday() const { return _birthday; }
std::string Contact::getFavoriteMeal() const { return _favoriteMeal; }
std::string Contact::getUnderwearColor() const { return _underwearColor; }
std::string Contact::getDarkestSecret() const { return _darkestSecret; }

std::string Contact::getFirstNameFormatted()
{
    std::string name = _firstName;

    if (name.size() > 10)
        name[9] = '.';
    return name.substr(0, 10);
}

std::string Contact::getLastNameFormatted()
{
    std::string name = _lastName;

    if (name.size() > 10)
        name[9] = '.';
    return name.substr(0, 10);
}

std::string Contact::getNicknameFormatted()
{
    std::string name = _nickname;

    if (name.size() > 10)
        name[9] = '.';
    return name.substr(0, 10);
}