//
// Created by Mykola Ponomarov on 23.06.2018.
//

#include "Enemy.hpp"

//Constructors - Destructors
//****************************************************************

Enemy::Enemy() {

    _hp = 0;
    _type.clear();

}

Enemy::Enemy(int hp, std::string const &type) {

    this->setType(type);
    this->setHP(hp);
}

Enemy::Enemy(const Enemy & copy) {

    _type = copy.getType();
    _hp = copy.getHP();
}

Enemy::~Enemy() {

    _hp = 0;
    _type.clear();
}

//Getters
//****************************************************************

int Enemy::getHP() const {

    return  _hp;
}

std::string Enemy::getType() const {

    return (_type);
}

//Setters
//****************************************************************

void Enemy::setHP(int hp) {

    _hp = hp;
}

void Enemy::setType(std::string type) {

    _type = type;
}

//Methods
//****************************************************************

Enemy & Enemy::operator=(const Enemy& data) {

    this->setType(data.getType());
    this->setHP(data.getHP());
    return (*this);
}

void Enemy::takeDamage(int damage) {

    int     current_hp = getHP();

    if (damage < 0)
        damage = -damage;

    if (current_hp > 0) {

        current_hp -= damage;
        if (current_hp <= 0) {


        }
        setHP(current_hp);
    }
}

std::ostream&   operator<<(std::ostream& stream, const Enemy & input) {

    stream << "Enemy " << input.getType() << " – HP[" << input.getHP() << "]" << std::endl;
    return (stream);
}