#include <iostream>
#include "iter.hpp"

int main()
{
    int array[] = {1, 2, 3, 4};
    iter(array, 4, show);

    std::string array2[] = {"Pierre", "Henry", "Alessio", "Elias"};
    iter(array2, 4, show);
    return (0);
}