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

		void			setFirstName();
		void			setLastName();
		void			setNickname();
		void			setLogin();
		void			setPostalAddress();
		void			setEmail();
		void			setPhoneNumber();
		void			setBirthday();
		void			setFavoriteMeal();
		void			setUnderwearColor();
		void			setDarkestSecret();

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

		bool			is_email(std::string str);
		std::string		getFirstNameFormatted();
		std::string		getLastNameFormatted();
		std::string		getNicknameFormatted();

	private:
		std::string		m_firstName;
		std::string		m_lastName;
		std::string		m_nickname;
		std::string		m_login;
		std::string		m_postalAddress;
		std::string		m_email;
		std::string		m_phoneNumber;
		std::string		m_birthday;
		std::string		m_favoriteMeal;
		std::string		m_underwearColor;
		std::string		m_darkestSecret;
};

#endif