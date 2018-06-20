//
// Created by Nikolas Ponomarov on 20.06.2018.
//

#include "Human.hpp"


int main(void)
{
    Brain brain;
    std::cout << brain.identify() << std::endl;

    Human bob;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;

    return 0;
}