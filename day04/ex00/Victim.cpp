//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "Victim.hpp"

Victim::Victim() {
    _name.clear();
}

Victim::Victim(std::string name) {

    this->set_name(name);

    std::cout << "Some random victim called " << this->get_name() << " just popped !" << std::endl;
}

Victim::~Victim() {

    std::cout << "Victim " << this->get_name() << " just died for no apparent reason !" << std::endl;
    this->get_name().clear();
}

std::ostream&     operator<<(std::ostream& stream, const Victim & data) {


    stream << "I'm " << data.get_name() << " and I like otters !" << std::endl;
    return (stream);
}

void Victim::getPolymorphed() const {

    std::cout << this->get_name() << " has been turned into a cute little sheep !" << std::endl;

}

void Victim::set_name(std::string name) {

    _name = name;
}

std::string Victim::get_name() const {

    return (_name);

}

Victim::Victim(const Victim& copy) {

    _name = copy.get_name();
}

Victim&     Victim::operator=(const Victim& data) {

    _name = data.get_name();
    return (*this);
}
