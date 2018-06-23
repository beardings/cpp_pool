//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "AssaultTerminator.hpp"

//Constructors - Destructors
//****************************************************************

AssaultTerminator::AssaultTerminator() {

    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& copy) {

    std::cout << "copy constructor" << std::endl;
    (void)copy;
}

AssaultTerminator::~AssaultTerminator() {

    std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator&  AssaultTerminator::operator=(const AssaultTerminator& data) {

    std::cout << "Assigment operator" << std::endl;
    (void)data;
    return (*this);
}

//Methods
//****************************************************************

ISpaceMarine* AssaultTerminator::clone() const {

    return (new AssaultTerminator(*this));
}


void AssaultTerminator::battleCry() const {

    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {

    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {

    std::cout << "* attacks with chainfists *" << std::endl;
}