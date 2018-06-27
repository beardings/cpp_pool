//
// Created by Mykola Ponomarov on 27.06.2018.
//

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B: public Base {

public:

    B();
    B(B const &rfs);
    virtual ~B();

    B & operator=(B const &rfs);

};


#endif
