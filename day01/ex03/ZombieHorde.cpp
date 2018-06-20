//
// Created by Nikolas Ponomarov on 20.06.2018.
//

#include "ZombieHorde.hpp"

void ZombieHorde::announce() {

    for (int i = 0; i < _len; i++)
        _arr[i].announce();

}

ZombieHorde::ZombieHorde(int size) {

    _arr = new Zombie[size];
    _len = size;
}

ZombieHorde::~ZombieHorde() {

    delete[] _arr;
}