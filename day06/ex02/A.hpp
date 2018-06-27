//
// Created by Mykola Ponomarov on 27.06.2018.
//

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A : public Base {

public:

    A();
    A(A const &rfs);
    virtual ~A();

    A & operator=(A const &rfs);
};


#endif
