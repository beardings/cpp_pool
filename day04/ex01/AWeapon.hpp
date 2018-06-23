//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {

private:
    int _damage;
    int _apcost;
    std::string _name;

public:

    AWeapon();
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(const AWeapon& copy);
    AWeapon& operator=(const AWeapon& rvalue);
    virtual ~AWeapon();


    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;

    void setName(std::string name);
    void setDamage(int damage);
    void setApcost(int apcost);

    virtual void attack() const;



};

std::ostream&   operator<<(std::ostream& stream, const AWeapon& data);

#endif
