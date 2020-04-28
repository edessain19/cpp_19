#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Pony
{
private:
    std::string Name;
    std::string Color;
    std::string size;

public:
    Pony();
    ~Pony();
    void    ponyFaitDuBruit(void);
};

void    ponyOnTheStack(void);
void    ponyOnTheHeap(void);

#endif
