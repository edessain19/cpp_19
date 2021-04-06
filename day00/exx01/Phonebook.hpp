#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>

#include "Contact.hpp"

class Phonebook
{
    private:
        Contact     m_contacts[8];
        int         m_contactNbr;
    
    public:
        Phonebook();
        ~Phonebook();
        void createContact();
        void searchContact();
        void showContacts();
        void showContact(int inputUser);
        bool isNumeric(std::string str);
};

#endif