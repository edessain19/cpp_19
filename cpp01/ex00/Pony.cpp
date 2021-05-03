#include "Pony.hpp"

Pony::Pony()
{
    std::cout << "constructeur called" << std::endl;
    _name = "";
}

Pony::~Pony()
{
    std::cout << "destructeur called" << std::endl;
}

void Pony::set_name(std::string str)
{
    _name = str;
}

std::string Pony::get_name()
{
    return (_name);
}