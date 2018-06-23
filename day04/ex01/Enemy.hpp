//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {

private:

    int _hp;
    std::string _type;

public:

    Enemy();
    Enemy(const Enemy& copy);
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();

    std::string getType() const;
    int getHP() const;

    void setType(std::string type);
    void setHP(int hp);

    Enemy & operator=(const Enemy & rvalue);
    virtual void takeDamage(int damage);

};

std::ostream & operator<<(std::ostream& stream, const Enemy& input);

#endif
