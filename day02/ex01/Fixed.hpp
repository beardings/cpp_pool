//
// Created by Nikolas Ponomarov on 21.06.2018.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:

    Fixed();
    ~Fixed();

    Fixed(int const & number);
    Fixed(float const & number);
    Fixed(Fixed const & data);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed&  operator=(Fixed const & data);

    float toFloat( void ) const;
    int toInt( void ) const;

private:

    int _fixedPointValue;
    static const int _numberFactorialBits = 8;
};

std::ostream&   operator<<(std::ostream& stream, Fixed const & data);

#endif
