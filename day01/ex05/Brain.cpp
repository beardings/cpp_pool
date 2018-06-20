//
// Created by Nikolas Ponomarov on 20.06.2018.
//

#include "Brain.hpp"

std::string Brain::identify() {

    std::stringstream ss;
    ss << std::hex << this;

    return ss.str();
}