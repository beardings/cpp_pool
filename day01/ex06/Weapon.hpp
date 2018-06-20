//
// Created by Mykola Ponomarov on 20.06.2018.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {

public:

    Weapon(std::string type);
    std::string& getType();
    void setType(std::string type);

private:
    std::string _type;

};


#endif
