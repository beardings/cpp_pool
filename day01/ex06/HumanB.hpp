//
// Created by Mykola Ponomarov on 20.06.2018.
//

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {

public:
    HumanB(std::string input);
    void attack(void);
    void setWeapon(Weapon& basic_weapon);
    ~HumanB();

private:
    std::string _name;
    Weapon*	_weapon;

};



#endif
