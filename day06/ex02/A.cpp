//
// Created by Mykola Ponomarov on 27.06.2018.
//

#include "A.hpp"

A::A() {

}

A::A(A const &rfs) {

    (void)rfs;
}

A::~A() {

}

A & A::operator=(A const &rfs) {

    (void)rfs;
    return *this;
}