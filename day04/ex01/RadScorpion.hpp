//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP


#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

    RadScorpion();
    ~RadScorpion();

    RadScorpion(const RadScorpion & copy);
    RadScorpion & operator=(const RadScorpion & data);

    void takeDamage(int damage);

};


#endif
