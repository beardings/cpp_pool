//
// Created by Mykola Ponomarov on 19.06.2018.
//

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type) {

    this->type = type;
}

void ZombieEvent::randomChump() {

    Zombie zombie;
    zombie.announce();

}

Zombie* ZombieEvent::newZombie(std::string name) {

    Zombie *zombies = new Zombie();

    zombies->newZombie = true;
    zombies->name = name;
    zombies->type = this->type;

    return zombies;

}

ZombieEvent::ZombieEvent() {

    this->type = "ZombieEvent type";
}

ZombieEvent::~ZombieEvent() {

    this->type.clear();
}