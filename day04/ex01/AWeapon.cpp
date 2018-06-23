//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "AWeapon.hpp"

//Constructors - Destructors
//****************************************************************

AWeapon::AWeapon() {

    _name.clear();
    _damage = 0;
    _apcost = 0;

}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) {

    _name = name;
    _damage = apcost;
    _apcost = damage;
}

AWeapon::AWeapon(const AWeapon &copy) {

    _name = copy.getName();
    _damage = copy.getDamage();
    _apcost = copy.getAPCost();
}

AWeapon& AWeapon::operator=(const AWeapon& data) {

    this->setName(data.getName());
    this->setDamage(data.getDamage());
    this->setApcost(data.getAPCost());

    return (*this);
}

AWeapon::~AWeapon() {

}

//Getters
//****************************************************************

int AWeapon::getAPCost() const {

    return (_apcost);
}

int AWeapon::getDamage() const {

    return (_damage);
}

std::string AWeapon::getName() const {

    return (_name);
}


//Setters
//****************************************************************

void AWeapon::setApcost(int apcost) {

    _apcost = apcost;
}

void AWeapon::setDamage(int damage) {
    _damage = damage;
}

void AWeapon::setName(std::string name) {
    _name = name;
}

//Methods
//****************************************************************

void AWeapon::attack() const {

    std::cout << "Abstract attack" << std::endl;
}

std::ostream&     operator<<(std::ostream& stream, const AWeapon & data) {

    stream << "Weapon " << data.getName() << " can deal " << data.getDamage() << " damage ";
    stream << "and use " << data.getAPCost() << " action points" << std::endl;
    return (stream);
}