//
// Created by Mykola Ponomarov on 23.06.2018.
//

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {

private:
    std::string _name;

public:

    Victim();
    Victim(const Victim& copy);
    Victim(std::string name);
    ~Victim();

    void getPolymorphed() const;


    Victim& operator=(const Victim& data);

    void set_name(std::string name);
    std::string get_name(void) const;

};

std::ostream&   operator<<(std::ostream& stream, Victim const & data);

#endif
