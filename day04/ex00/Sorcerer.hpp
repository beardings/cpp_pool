//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

public:
    std::string _name;
    std::string _title;

    Sorcerer(std::string name, std::string title);
    ~Sorcerer();

    void polymorph(Victim const &) const;

};

std::ostream&   operator<<(std::ostream& stream, Sorcerer const & data);

#endif
