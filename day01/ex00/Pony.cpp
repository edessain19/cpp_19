#include "Pony.hpp"

Pony::Pony()
{
    this->name = NULL;
    this->size = 0;
    this->color = NULL;
}

void Pony::ponyOnTheStack(void)
{
	Pony num1;

}

void Pony::ponyOnTheHeap(void)
{
	Pony* num2;

	num2 = new Pony();

	delete[] num2;
}
