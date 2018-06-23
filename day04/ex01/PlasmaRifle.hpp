//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {

public:

    PlasmaRifle();
    ~PlasmaRifle();
    PlasmaRifle(const PlasmaRifle& data);
    PlasmaRifle& operator=(const PlasmaRifle& rvalue);
    void attack() const;
};


#endif
