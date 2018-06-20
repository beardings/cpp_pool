//
// Created by Nikolas Ponomarov on 20.06.2018.
//

#include "Human.hpp"

std::string Human::identify() {
    return this->brain.identify();
}

Brain&   Human::getBrain() {
    return (this->brain);
}