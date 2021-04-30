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
        Contact     _contacts[8];
        int         _contactNbr;
    
    public:
        Phonebook();
        ~Phonebook();
        int createContact();
        int searchContact();
        void showContacts();
        void showContact(int inputUser);
        bool isNumeric(std::string str);
};

#endif