//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "Peon.hpp"

Peon::Peon() {

}

Peon::Peon(std::string name) : Victim(name) {

    std::cout << "Zog zog."<< std::endl;
}

Peon::~Peon() {

    std::cout << "Bleuark..."<< std::endl;
}

Peon::Peon(const Peon& copy) {

    set_name(copy.get_name());
}

Peon& Peon::operator=(const Peon& data) {

    set_name(data.get_name());
    return (*this);
}

void Peon::getPolymorphed() const {

    std::cout << this->get_name() << " has been turned into a pink pony!" << std::endl;
}