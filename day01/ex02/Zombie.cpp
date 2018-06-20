//
// Created by Mykola Ponomarov on 19.06.2018.
//

#include "Zombie.hpp"

void Zombie::announce() {

    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> number(0,4);

    if (!this->newZombie)
    {
        this->name = this->names[number(rng)];
        this->type = this->types[number(rng)];
    }
    else
        this->newZombie = false;

    this->message = this->messages[number(rng)];

    std::cout << "<" << this->name << " (" << this->type << ")> " << this->message <<std::endl;
}

Zombie::Zombie() {

    this->names[0] = "Boomer";
    this->names[1] = "Hunter";
    this->names[2] = "Smoker";
    this->names[3] = "Tank";
    this->names[4] = "Witch";


    this->types[0] = "Walkers";
    this->types[1] = "Runners";
    this->types[2] = "Ghouls";
    this->types[3] = "Tanks";
    this->types[4] = "Crawlers";


    this->messages[0] = "Braiiiiiiinnnssss...";
    this->messages[1] = "Cut someone dead...";
    this->messages[2] = "Dead and buried...";
    this->messages[3] = "Dead of night...";
    this->messages[4] = "Dead man walking...";

    this->newZombie = false;
}

Zombie::~Zombie() {

    this->message.clear();
    this->name.clear();
    this->type.clear();
}
