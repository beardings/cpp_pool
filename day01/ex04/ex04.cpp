//
// Created by Nikolas Ponomarov on 20.06.2018.
//

#include <iostream>

int main (void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    pstr = &str;
    std::string&    rstr = str;

    std::cout << "pointer " << *pstr << std::endl;
    std::cout << "reference " << rstr << std::endl;
    return 0;
}