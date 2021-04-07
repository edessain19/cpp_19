#include "Pony.hpp"

Pony::Pony()
{
    m_name = "";
}

Pony::~Pony()
{
}

void Pony::set_name(std::string str)
{
    m_name = str;
}

std::string Pony::get_name()
{
    return (m_name);
}