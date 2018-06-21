//
// Created by Nikolas Ponomarov on 21.06.2018.
//

#include "Fixed.hpp"

Fixed::Fixed() {

    std::cout << "Default constructor called" << std::endl;
    _fixedPointValue = 0;
}

Fixed::~Fixed() {

    std::cout << "Destructor called" << std::endl;
    _fixedPointValue = 0;
}

Fixed::Fixed(Fixed &data) {

    std::cout << "Copy constructor called" << std::endl;
    *this = data;
}

int Fixed::getRawBits() const {

    std::cout << "getRawBits member function called" << std::endl;
    return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw) {

    std::cout << "setRawBits member function called" << std::endl;
    _fixedPointValue = raw;
}

Fixed&  Fixed::operator=(Fixed& data) {

    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPointValue = data.getRawBits();
    return (*this);
}