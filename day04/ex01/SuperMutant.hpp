//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP


#include "Enemy.hpp"

class SuperMutant: public Enemy {

public:

    SuperMutant();
    ~SuperMutant();

    SuperMutant(const SuperMutant & copy);
    SuperMutant & operator=(const SuperMutant & data);

    void takeDamage(int damage);

};


#endif
