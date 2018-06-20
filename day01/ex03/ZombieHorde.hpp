//
// Created by Nikolas Ponomarov on 20.06.2018.
//

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {

public:
    ZombieHorde(int size);
    ~ZombieHorde();

    void announce();

private:
    int _len;
    Zombie *_arr;
};


#endif
