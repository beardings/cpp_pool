//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "PlasmaRifle.hpp"

//Constructors - Destructors
//****************************************************************

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5) {

}

PlasmaRifle::~PlasmaRifle() {


}


//Methods
//****************************************************************

PlasmaRifle::PlasmaRifle(const PlasmaRifle& copy) {

    this->setName(copy.getName());
    this->setDamage(copy.getDamage());
    this->setApcost(copy.getAPCost());
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& data) {

    this->setName(data.getName());
    this->setDamage(data.getDamage());
    this->setApcost(data.getAPCost());
    return (*this);
}


void PlasmaRifle::attack() const {

    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}