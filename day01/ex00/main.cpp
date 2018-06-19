//
// Created by Mykola Ponomarov on 19.06.2018.
//

#include "Pony.hpp"

int main(void)
{
    Pony *horse;

    horse->ponyOnTheStack("13",13);
    horse->ponyOnTheHeap("31", 31);

    return 0;
}