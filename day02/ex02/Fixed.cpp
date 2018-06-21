//
// Created by Nikolas Ponomarov on 21.06.2018.
//

#include "Fixed.hpp"

Fixed::Fixed() {

    _fixedPointValue = 0;
}

Fixed::~Fixed() {

    _fixedPointValue = 0;
}

Fixed::Fixed(Fixed const &data) {

    *this = data;
}

Fixed::Fixed(int const & number) {

    float newNumber = std::roundf(number * 256.0f);
    _fixedPointValue = (int)newNumber;
}

Fixed::Fixed(float const & number) {

    float newNumber = std::roundf(number * 256.0f);
    _fixedPointValue = (int)newNumber;
}



int Fixed::getRawBits() const {

    return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw) {

    _fixedPointValue = raw;
}

Fixed& Fixed::operator=(Fixed const & data) {

    this->_fixedPointValue = data.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& input) {

    float     value;

    value = ((float)input.getRawBits()) / 256.0f;
    stream << value;
    return (stream);
}

float Fixed::toFloat( void ) const {

    return (((float)_fixedPointValue / 256.0f));
}

int Fixed::toInt( void ) const {

    return (_fixedPointValue / 256);
}


Fixed &Fixed::max(Fixed &src1, Fixed &src2) {

    if (src1 > src2)
        return src1;
    return src2;
}

Fixed const &Fixed::max(Fixed const &src1, Fixed const &src2) {

    if (src1 > src2)
        return src1;
    return src2;
}

Fixed &Fixed::min(Fixed &src1, Fixed &src2) {

    if (src1 < src2)
        return src1;
    return src2;
}

Fixed const &Fixed::min(Fixed const &src1, Fixed const &src2) {

    if (src1 < src2)
        return src1;
    return src2;
}

bool Fixed::operator<(Fixed const &src) const {

    if (getRawBits() < src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator>(Fixed const &src) const {

    if (getRawBits() > src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator>=(Fixed const &src) const {

    if (getRawBits() >= src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<=(Fixed const &src) const {

    if (getRawBits() <= src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator==(Fixed const &src) const {

    if (getRawBits() == src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator!=(Fixed const &src) const {

    if (getRawBits() != src.getRawBits())
        return true;
    return false;
}

Fixed &Fixed::operator+(Fixed const src) {

    return (*(new Fixed(toFloat() + src.toFloat())));
}

Fixed &Fixed::operator-(Fixed const src) {

    return (*(new Fixed(toFloat() - src.toFloat())));

}

Fixed &Fixed::operator*(Fixed const src) {

    return (*(new Fixed(toFloat() * src.toFloat())));
}

Fixed  &Fixed::operator/(Fixed const src) {

    return (*(new Fixed(toFloat() / src.toFloat())));
}

Fixed &Fixed::operator++(void) {

    _fixedPointValue++;
    return (*this);
}

Fixed Fixed::operator++(int) {

    Fixed   *res = new Fixed(*this);

    _fixedPointValue++;
    return (*res);
}

Fixed &Fixed::operator--(void) {

    _fixedPointValue--;
    return (*this);
}

Fixed Fixed::operator--(int) {

    Fixed   *res = new Fixed(*this);

    _fixedPointValue--;
    return (*res);
}