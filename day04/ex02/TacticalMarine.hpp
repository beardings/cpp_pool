//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:

    TacticalMarine();
    ~TacticalMarine();

    TacticalMarine(const TacticalMarine& copy);
    TacticalMarine&  operator=(const TacticalMarine& data);

    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif
