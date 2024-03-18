/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:50:17 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/19 15:50:17 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
}

Fixed::Fixed(const Fixed& other) {
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other) {
    this->value = other.getRawBits();
    return (*this);
}

Fixed::Fixed(const int x) {
    value = x << bits;
}

Fixed::Fixed(const float y) {
    value = roundf(y * (1 << bits));
}

float   Fixed::toFloat(void) const {
    return ((float)value / (float)(1 << bits));
}

int Fixed::toInt(void) const {
    return (value >> bits);
}


int Fixed::getRawBits(void) const {
    return (value);
}

void    Fixed::setRawBits(int const raw) {
    value = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value) {
    out << value.toFloat();
    return out;
}

Fixed::~Fixed() {
}

bool    Fixed::operator>(const Fixed &value) const {
    return this->getRawBits() > value.getRawBits();
}

bool    Fixed::operator<(const Fixed &value) const {
    return this->getRawBits() < value.getRawBits();
}

bool    Fixed::operator>=(const Fixed &value) const {
    return this->getRawBits() >= value.getRawBits();
}

bool    Fixed::operator<=(const Fixed &value) const {
    return this->getRawBits() >= value.getRawBits();
}

bool    Fixed::operator!=(const Fixed &value) const {
    return this->getRawBits() != value.getRawBits();
}

bool    Fixed::operator==(const Fixed &value) const {
    return this->getRawBits() == value.getRawBits();
}

Fixed   Fixed::operator+(const Fixed& value) const {
    return (Fixed(this->toFloat() + value.toFloat()));
}

Fixed   Fixed::operator-(const Fixed& value) const {
    return (Fixed(this->toFloat() - value.toFloat()));
}

Fixed   Fixed::operator*(const Fixed& value) const {
    return (Fixed(this->toFloat() * value.toFloat()));
}

Fixed   Fixed::operator/(const Fixed& value) const {
    return (Fixed(this->toFloat() / value.toFloat()));
}


Fixed&  Fixed::operator++(void) {
    this->value++;
    return *this;
}

Fixed  Fixed::operator++(int) {
    Fixed   tmp(*this);
    ++(*this);
    return tmp;
}

Fixed&  Fixed::operator--(void) {
    this->value--;
    return *this;
}

Fixed   Fixed::operator--(int) {
    Fixed   tmp(*this);
    --(*this);
    return tmp;
}

Fixed&  Fixed::min(Fixed& a, Fixed& b) {
    return (a > b) ? b : a;
}

const Fixed&  Fixed::min(const Fixed& a, const Fixed& b) {
    return (a > b) ? b : a;
}

Fixed&  Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}