//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "TacticalMarine.hpp"

//Constructors - Destructors
//****************************************************************

TacticalMarine::TacticalMarine() {

    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& copy) {

    std::cout << "copy constructor" << std::endl;
    (void)copy;
}

TacticalMarine::~TacticalMarine() {

    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine&  TacticalMarine::operator=(const TacticalMarine& data) {

    std::cout << "Assigment operator" << std::endl;
    (void)data;
    return (*this);
}

//Methods
//****************************************************************

ISpaceMarine*       TacticalMarine::clone() const {

    return (new TacticalMarine(*this));
}

void                TacticalMarine::battleCry() const {

    std::cout << "For the holy PLOT!" << std::endl;
}

void                TacticalMarine::rangedAttack() const {

    std::cout << "* attacks with bolter *" << std::endl;
}

void                TacticalMarine::meleeAttack() const {

    std::cout << "* attacks with chainsword *" << std::endl;
}
