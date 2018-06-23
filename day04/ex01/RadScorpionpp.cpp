//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "RadScorpion.hpp"

//Constructors - Destructors
//****************************************************************

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {

    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

//Methods
//****************************************************************

void RadScorpion::takeDamage(int damage) {

    int     current_hp = getHP();

    if (damage < 0)
        damage = -damage;

    if (current_hp > 0) {

        current_hp -= damage;
        if (current_hp <= 0) {

            delete this;
            return ;
        }

        setHP(current_hp);
    }
}

RadScorpion::RadScorpion(const RadScorpion& copy) {

    this->setType(copy.getType());
    this->setHP(copy.getHP());
}

RadScorpion & RadScorpion::operator=(const RadScorpion & data) {

    this->setType(data.getType());
    this->setHP(data.getHP());
    return (*this);
}