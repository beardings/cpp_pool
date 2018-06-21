//
// Created by Nikolas Ponomarov on 21.06.2018.
//

#include "Fixed.hpp"

int main(void) {

    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}