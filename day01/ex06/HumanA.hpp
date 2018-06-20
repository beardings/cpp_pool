//
// Created by Mykola Ponomarov on 20.06.2018.
//

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {

public:
    HumanA(std::string input, Weapon& basic_weapon);
    void attack();
    ~HumanA();

private:

    std::string _name;
    Weapon& _type;

};


#endif
