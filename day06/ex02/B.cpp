//
// Created by Mykola Ponomarov on 27.06.2018.
//

#include "B.hpp"

B::B() {

}

B::B(B const &rfs) {

    (void)rfs;
}

B::~B() {

}

B &B::operator=(B const &rfs) {

    (void) rfs;
    return *this;
}