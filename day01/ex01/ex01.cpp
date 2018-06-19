//
// Created by Mykola Ponomarov on 19.06.2018.
//

#include <iostream>

void memoryLeak() {

    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}