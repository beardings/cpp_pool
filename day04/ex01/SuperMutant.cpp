//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "SuperMutant.hpp"

//Constructors - Destructors
//****************************************************************

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant") {

    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {

    std::cout << "Aaargh ..." << std::endl;
}

//Methods
//****************************************************************

void SuperMutant::takeDamage(int damage) {

    int current_dmg = damage - 3;
    int current_hp = getHP();

    if (current_dmg < 0)
        current_dmg = -current_dmg;

    if (current_hp > 0) {

        current_hp -= current_dmg;
        if (current_hp <= 0) {

            delete this;
            return ;
        }
        setHP(current_hp);
    }
}

SuperMutant::SuperMutant(const SuperMutant& copy) {

    this->setType(copy.getType());
    this->setHP(copy.getHP());
}

SuperMutant & SuperMutant::operator=(const SuperMutant & data) {

    this->setType(data.getType());
    this->setHP(data.getHP());
    return (*this);
}