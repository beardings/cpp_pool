//
// Created by Mykola Ponomarov on 27.06.2018.
//

#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C: public Base {

public:

    C();
    C(C const &rfs);
    virtual ~C();

    C & operator=(C const &rfs);

};


#endif
