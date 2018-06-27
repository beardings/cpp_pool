//
// Created by Mykola Ponomarov on 27.06.2018.
//

#include "C.hpp"

C::C() {

}

C::C(C const &rfs) {

    (void)rfs;
}

C::~C() {

}

C & C::operator=(C const &rfs) {

    (void)rfs;
    return *this;
}