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

Fixed::Fixed(Fixed const &data) {

    std::cout << "Copy constructor called" << std::endl;
    *this = data;
}

Fixed::Fixed(int const & number) {
    std::cout << "Int constructor called" << std::endl;

    float newNumber = std::roundf(number * 256.0f);
    _fixedPointValue = (int)newNumber;


}

Fixed::Fixed(float const & number) {
    std::cout << "Float constructor called" << std::endl;

    float newNumber = std::roundf(number * 256.0f);
    _fixedPointValue = (int)newNumber;
}



int Fixed::getRawBits() const {

    //std::cout << "getRawBits member function called" << std::endl;
    return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw) {

    std::cout << "setRawBits member function called" << std::endl;
    _fixedPointValue = raw;
}

Fixed&  Fixed::operator=(Fixed const & data) {

    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPointValue = data.getRawBits();
    return (*this);
}

std::ostream&     operator<<(std::ostream& stream, const Fixed& input) {

    float     value;

    value = ((float)input.getRawBits()) / 256.0f;
    stream << value;
    return (stream);
}

float Fixed::toFloat() const {

    float     value;

    value = roundf(((float)this->getRawBits()) / 256.0f);
    return (value);
}

int Fixed::toInt() const {

    float     value;

    value = roundf(((float)this->getRawBits()) / 256.0f);
    return ((int)value);
}