//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:

    AssaultTerminator();
    ~AssaultTerminator();

    AssaultTerminator(const AssaultTerminator & copy);
    AssaultTerminator & operator=(const AssaultTerminator & data);

    ISpaceMarine * clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif
