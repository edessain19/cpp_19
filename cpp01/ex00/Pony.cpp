#include "Pony.hpp"

Pony::Pony()
{
    std::cout << "constructeur called" << std::endl;
    m_name = "";
}

Pony::~Pony()
{
    std::cout << "destructeur called" << std::endl;
}

void Pony::set_name(std::string str)
{
    m_name = str;
}

std::string Pony::get_name()
{
    return (m_name);
}