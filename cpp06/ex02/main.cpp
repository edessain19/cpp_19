
#include <iostream>
#include <time.h>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate(void)
{  
    int i;
    srand(time(NULL));
    
    i = rand() % 3;
    if (i == 1)
        return (new A());
    else if (i == 2)
        return (new B());
    else
        return (new C());
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
    if (dynamic_cast<A*>(&p) != nullptr)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(&p) != nullptr)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(&p) != nullptr)
        std::cout << "C" << std::endl;
}

int main()
{
    Base *base;

    base = generate();
	std::cout << "Identify from pointer :" << std::endl;
    identify_from_pointer(base);
	std::cout << "Identify from reference :" << std::endl;
    identify_from_reference(*base);
    delete base;
}