//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad {

public:

    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int index) const = 0;
    virtual int push(ISpaceMarine *troop) = 0;
};


#endif
