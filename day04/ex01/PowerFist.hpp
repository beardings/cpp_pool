//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon {

public:

    PowerFist();
    ~PowerFist();
    PowerFist(const PowerFist& data);
    PowerFist& operator=(const PowerFist& rvalue);
    void attack() const;

};


#endif
