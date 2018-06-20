//
// Created by Mykola Ponomarov on 19.06.2018.
//

#import "Zombie.hpp"
#import "ZombieHorde.hpp"

int main (void) {

    Zombie zombie;
    zombie.announce();
    zombie.announce();
    zombie.announce();

    std::cout << std::endl;

    ZombieHorde horde(5);
    horde.announce();

    return 0;
}