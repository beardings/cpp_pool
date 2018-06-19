//
// Created by Mykola Ponomarov on 19.06.2018.
//

#include "Pony.hpp"

Pony *Pony::ponyOnTheHeap(std::string color, int age) {
    Pony *horse = new Pony(color, age);
    horse->free = true;

    std::cout << "heap alloc" << std::endl;
    return horse;
}

Pony Pony::ponyOnTheStack(std::string color, int age) {

    Pony horse(color, age);

    std::cout << "stack alloc" << std::endl;

    return horse;
}

Pony::Pony(std::string color, int age) {
    this->color = color;
    this->age = age;
    this->free = false;
}

Pony::~Pony() {

    if (this->free)
        delete(this);
}