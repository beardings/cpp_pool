//
// Created by Mykola Ponomarov on 19.06.2018.
//

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {

public:

    ZombieEvent();
    ~ZombieEvent();

    void randomChump();
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);

private:

    std::string type;
};


#endif
