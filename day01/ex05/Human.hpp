//
// Created by Nikolas Ponomarov on 20.06.2018.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {

public:
    std::string identify();
    Brain   brain;
    Brain&   getBrain();
};


#endif
