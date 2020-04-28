#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>

using std::setw;

	class Contact
	{
	private:
		int			index;
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	Login;
		std::string	Adress;
		std::string	Email;
		std::string	Phone;
		std::string	Birthday;
		std::string	Meal;
		std::string	Underwear;
		std::string	Secret;
		
	public:
		void		add_contact(int total);
		void		show_contact(int index);
		void		show_index();
	};

#endif
