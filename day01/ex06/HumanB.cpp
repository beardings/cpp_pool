//
// Created by Mykola Ponomarov on 20.06.2018.
//

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon& basic_weapon) {

    _weapon = &basic_weapon;
}

void	HumanB::attack(void) {

    std::cout << _name + " attacks with his " << _weapon->getType() << std::endl;
}


HumanB::HumanB(std::string input) {

    _name = input;
}

HumanB::~HumanB() {

    _name.clear();
}