#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *heapPoney = new Pony();

    heapPoney->set_name("Heap_poney");
    std::cout << "Name of the Poney : " << heapPoney->get_name() << std::endl;
    delete heapPoney;
}

void ponyOnTheStack()
{
    Pony stackPoney;

    stackPoney.set_name("Stack_poney");
    std::cout << "Name of the Poney : " << stackPoney.get_name() << std::endl;
}

int main()
{
    std::cout << "----- Pony on the Heap -----" << std::endl;
    ponyOnTheHeap();
    std::cout << "----- Pony on the Stack ----" << std::endl;
    ponyOnTheStack();
    return (0);
}