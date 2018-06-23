//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "PowerFist.hpp"

//Constructors - Destructors
//****************************************************************

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8) {

}

PowerFist::~PowerFist() {

}

//Methods
//****************************************************************

PowerFist::PowerFist(const PowerFist& copy) {

    this->setName(copy.getName());
    this->setDamage(copy.getDamage());
    this->setApcost(copy.getAPCost());
}

PowerFist& PowerFist::operator=(const PowerFist& data) {

    this->setName(data.getName());
    this->setDamage(data.getDamage());
    this->setApcost(data.getAPCost());
    return (*this);
}


void PowerFist::attack() const {

    std::cout << "* pschhh... SBAM! *" << std::endl;
}