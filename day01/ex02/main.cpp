//
// Created by Mykola Ponomarov on 19.06.2018.
//

#import "Zombie.hpp"
#include "ZombieEvent.hpp"

int main (void) {

    Zombie zombie;
    zombie.announce();
    zombie.announce();
    zombie.announce();

    std::cout << std::endl;

    ZombieEvent event;

    event.randomChump();

    std::cout << std::endl;

    event.setZombieType("Something unbelievable");

    Zombie *newZombie = event.newZombie("Doctor");
    newZombie->announce();

    delete newZombie;

    return 0;
}