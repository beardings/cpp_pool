//
// Created by Mykola Ponomarov on 20.06.2018.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {

    this->setType(type);
}

void Weapon::setType(std::string type) {

    _type = type;
}

std::string& Weapon::getType() {
    return _type;
}