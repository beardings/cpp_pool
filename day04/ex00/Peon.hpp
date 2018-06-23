//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon: public Victim {

public:

    Peon();
    ~Peon();

    Peon(const Peon & copy);
    Peon(std::string name);

    void getPolymorphed() const;

    Peon& operator=(const Peon& data);

};


#endif
