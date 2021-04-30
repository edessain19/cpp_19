#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>


class Contact
{
	public:
		Contact();
		~Contact();

		int			setFirstName();
		int			setLastName();
		int			setNickname();
		int			setLogin();
		int			setPostalAddress();
		int			setEmail();
		int			setPhoneNumber();
		int			setBirthday();
		int			setFavoriteMeal();
		int			setUnderwearColor();
		int			setDarkestSecret();

	/* methodes constantes ou methodes de "lecture seul". Finissent par const a la fin */
		std::string		getFirstName() const;
		std::string		getLastName() const;
		std::string		getNickname() const;
		std::string		getLogin() const;
		std::string		getPostalAddress() const;
		std::string		getEmail() const;
		std::string		getPhoneNumber() const;
		std::string		getBirthday() const;
		std::string		getFavoriteMeal() const;
		std::string		getUnderwearColor() const;
		std::string		getDarkestSecret() const;

		std::string		getFirstNameFormatted();
		std::string		getLastNameFormatted();
		std::string		getNicknameFormatted();
		bool			is_email(std::string str);

	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_login;
		std::string		_postalAddress;
		std::string		_email;
		std::string		_phoneNumber;
		std::string		_birthday;
		std::string		_favoriteMeal;
		std::string		_underwearColor;
		std::string		_darkestSecret;
};

#endif