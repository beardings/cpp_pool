//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {

    _name = name;
    _title = title;

    std::cout << _name << ", " << _title << ", is born !" << std::endl;

}

Sorcerer::~Sorcerer() {

    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;

    _name.clear();
    _title.clear();

}

std::ostream&     operator<<(std::ostream& stream, const Sorcerer & data) {


    stream << "I am " << data._name <<  ", " << data._title <<", and I like ponies !" << std::endl;
    return (stream);
}

void Sorcerer::polymorph(Victim const & data) const {

    data.getPolymorphed();
}