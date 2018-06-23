//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "Squad.hpp"

//Constructors - Destructors
//****************************************************************

Squad::Squad() {

    _marines_army = NULL;
    _number_of_marines = 0;
}

Squad::~Squad() {


    this->_deleteArmy(this->_marines_army, this->_number_of_marines);
    _marines_army = NULL;
    _number_of_marines = 0;
}

Squad::Squad(const Squad& copy) {

    this->_deleteArmy(this->_marines_army, this->_number_of_marines);
    this->_newArmy(copy._marines_army, copy._number_of_marines);
    this->_number_of_marines = copy._number_of_marines;
}

Squad&              Squad::operator=(const Squad& rvalue) {

    this->_deleteArmy(this->_marines_army, this->_number_of_marines);
    this->_newArmy(rvalue._marines_army, rvalue._number_of_marines);
    this->_number_of_marines = rvalue._number_of_marines;
    return (*this);
}

//Getters
//****************************************************************

int Squad::getCount() const {

    return (_number_of_marines);
}

ISpaceMarine * Squad::getUnit(int index) const {

    return (_marines_army[index]);
}

//Methods
//****************************************************************

int Squad::push(ISpaceMarine *troop){

    if (troop != NULL) {

        _newArmy(_marines_army, _number_of_marines);
        _marines_army[_number_of_marines] = troop;
        _number_of_marines += 1;
    }
    return (_number_of_marines);
}

void Squad::_newArmy(ISpaceMarine  **const&old_marines_army, int number_of_marines) {

    ISpaceMarine **new_marines_army;

    new_marines_army = new ISpaceMarine*[number_of_marines + 1];
    _copyArmy(new_marines_army, old_marines_army, number_of_marines);
    delete _marines_army;
    _marines_army = new_marines_army;
}

void Squad::_copyArmy(ISpaceMarine  **&new_marines_army, ISpaceMarine  **const&old_marines_army, int number_of_marines) const {

    if (new_marines_army != NULL) {

        for (int i = 0; i < number_of_marines; ++i) {

            new_marines_army[i] = old_marines_army[i];
        }
    }
}

void Squad::_deleteArmy(ISpaceMarine  **&marines_army, int number_of_marines) {

    if (marines_army != NULL) {

        for (int i = 0; i < number_of_marines; ++i) {

            delete marines_army[i];
        }
        delete marines_army;
    }
}