//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

# define AP_REST    10
# define AP_MAX     40

class Character {

private:

    std::string _name;
    int _actionPoints;
    AWeapon *_weapon;


public:
    Character();
    ~Character();

    Character(std::string const & name);
    Character(const Character& copy);
    Character & operator=(const Character & rvalue);

    void recoverAP();
    void equip(AWeapon* weapon);
    void attack(Enemy* enemy);

    int getAP() const;
    AWeapon* getWeapon() const;
    std::string getName() const;

    void setActionPoints(int ap);
    void setName(std::string name);
    void setWeapon(AWeapon *weapon);
};

std::ostream & operator<<(std::ostream & stream, const Character & data);

#endif
