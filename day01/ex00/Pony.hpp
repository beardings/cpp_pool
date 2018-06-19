//
// Created by Mykola Ponomarov on 19.06.2018.
//

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {

public:

    std::string color;
    int         age;

    Pony(std::string color, int age);
    ~Pony();

    Pony *ponyOnTheHeap(std::string color, int age);
    Pony ponyOnTheStack(std::string color, int age);

private:
    bool free;
};


#endif
