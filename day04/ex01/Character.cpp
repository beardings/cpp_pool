//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "Character.hpp"

//Constructors - Destructors
//****************************************************************

Character::Character() {

    _name.clear();
    _actionPoints = 0;
    _weapon = NULL;
}

Character::Character(std::string const& name) {

    _name = name;
    _actionPoints = 40;
    _weapon = NULL;
}

Character::Character(const Character &copy) {

    this->setName(copy.getName());
    this->setWeapon(copy.getWeapon());
    this->setActionPoints(copy.getAP());
}

Character& Character::operator=(const Character& data) {

    this->setName(data.getName());
    this->setWeapon(data.getWeapon());
    this->setActionPoints(data.getAP());

    return (*this);
}

Character::~Character() {

    _actionPoints = 0;
    _name.clear();
    delete _weapon;
}

//Getters
//****************************************************************

AWeapon* Character::getWeapon() const {

    return _weapon;
}

int Character::getAP() const {

    return _actionPoints;
}

std::string Character::getName() const {
    return (_name);
}

//Setters
//****************************************************************

void Character::setName(std::string name) {

    _name = name;
}

void Character::setActionPoints(int ap) {

    _actionPoints = ap;
}

void Character::setWeapon(AWeapon *weapon) {

    _weapon = weapon;
}

//Methods
//****************************************************************

void Character::recoverAP() {

    int     ap_amount = this->getAP() + AP_REST;

    if (ap_amount > AP_MAX)
        ap_amount = AP_MAX;

    this->setActionPoints(ap_amount);
}

void Character::equip(AWeapon *weapon) {

    this->setWeapon(weapon);
}

void Character::attack(Enemy *enemy) {

    if (this->getWeapon()) {

        int     ap_cost = this->getAP() - this->getWeapon()->getAPCost();

        if(ap_cost >= 0) {

            std::cout << this->getName() << " attacks " << enemy->getType();
            std::cout << " with a " << this->getWeapon()->getName() << std::endl;
            this->getWeapon()->attack();
            enemy->takeDamage(this->getWeapon()->getDamage());
            this->setActionPoints(ap_cost);
        }
    }
}

std::ostream & operator<<(std::ostream& stream, const Character & data) {

    stream << data.getName() << " has " << data.getAP() << " and";

    if (data.getWeapon())
        stream << " wields a " << data.getWeapon()->getName();
    else
        stream << " is unarmed";

    stream << std::endl;
    return (stream);
}