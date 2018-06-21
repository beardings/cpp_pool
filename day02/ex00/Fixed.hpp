//
// Created by Nikolas Ponomarov on 21.06.2018.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public:
    Fixed();
    Fixed(Fixed& data);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed&  operator=(Fixed& data);

private:

    int _fixedPointValue;
    static const int _numberFactorialBits = 8;
};


#endif
