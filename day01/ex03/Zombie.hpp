//
// Created by Mykola Ponomarov on 19.06.2018.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <random>

class Zombie {

public:

    std::string name;
    std::string type;
    bool newZombie;

    void  announce();
    Zombie();
    ~Zombie();

private:
    std::string message;

    std::string names[5];
    std::string types[5];
    std::string messages[5];
};


#endif
