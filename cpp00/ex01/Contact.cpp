#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

int Contact::setFirstName()
{
	std::string name;

	std::cout << "First name: ";
	if (!std::getline(std::cin, name))
        return (0);
	while (name == "")
	{
		std::cout << "Wrong input" << std::endl;
		std::cout << "First name: ";
        std::cin.ignore();
		if (!std::getline(std::cin, name))
            return 0;
	}
	_firstName = name;
    return (1);
}

int Contact::setLastName()
{
    std::string name;

    std::cout << "Last name: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Last name: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _lastName = name;
    return (1);
}

int Contact::setNickname()
{
    std::string name;

    std::cout << "Nickname: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Nickname: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _nickname = name;
    return (1);
}

int Contact::setLogin()
{
    std::string name;

    std::cout << "Login: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Login: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _login = name;
    return (1);
}

int Contact::setPostalAddress()
{
    std::string name;

    std::cout << "Postal Address: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Postal Address: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _postalAddress = name;
    return (1);
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

int Contact::setEmail()
{
    std::string name;

    std::cout << "Email: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (!is_email(name))
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Email: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _email = name;
    return (1);
}

int Contact::setPhoneNumber()
{
    std::string name;

    std::cout << "Phone number: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Phone number: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _phoneNumber = name;
    return (1);
}

int Contact::setBirthday()
{
    std::string name;

    std::cout << "Birthday: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Birthday: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _birthday = name;
    return (1);
}

int Contact::setFavoriteMeal()
{
    std::string name;

    std::cout << "Favorite meal: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Favorite meal: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _favoriteMeal = name;
    return (1);
}

int Contact::setUnderwearColor()
{
    std::string name;

    std::cout << "Underwear color: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Underwear color: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _underwearColor = name;
    return (1);
}

int Contact::setDarkestSecret()
{
    std::string name;

    std::cout << "Darkest secret: ";
    if (!std::getline(std::cin, name))
        return (0);
    while (name == "")
    {
        std::cout << "Wrong input" << std::endl;
        std::cout << "Darkest secret: ";
		if (!std::getline(std::cin, name))
            return 0;
    }
    _darkestSecret = name;
    return (1);
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