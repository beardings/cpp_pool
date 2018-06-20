//
// Created by Mykola Ponomarov on 20.06.2018.
//

#include "HumanA.hpp"

void	HumanA::attack() {

    std::cout << _name + " attacks with his " << _type.getType() << std::endl;
}

HumanA::HumanA(std::string input, Weapon& basic_weapon): _type(basic_weapon) {

    _name = input;
    _type = basic_weapon;
}

HumanA::~HumanA() {

    _name.clear();
}