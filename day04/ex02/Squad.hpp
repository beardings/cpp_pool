//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad {

public:

    Squad();
    ~Squad();

    Squad(const Squad& copy);
    Squad & operator=(const Squad & rvalue);

    int getCount() const;
    ISpaceMarine * getUnit(int index) const;
    int push(ISpaceMarine* troop);

private:

    int _number_of_marines;
    ISpaceMarine **_marines_army;
    void _newArmy(ISpaceMarine **const&old_marines_army, int number_of_marines);
    void _copyArmy(ISpaceMarine  **&new_marines_army, ISpaceMarine  **const&old_marines_army, int number_of_marines) const;
    void _deleteArmy(ISpaceMarine  **&marines_army, int number_of_marines);
};


#endif
