/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:27:44 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/12 17:27:44 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = other.getRawBits();
    return (*this);
}

Fixed::Fixed(const int x) {
    std::cout << "Int constructor called" << std::endl;
    value = x << bits;
}

Fixed::Fixed(const float y) {
    std::cout << "Float constructor called" << std::endl;
    value = roundf(y * (1 << bits));
}

float   Fixed::toFloat(void) const {
    return ((float)value / (float)(1 << bits));
}

int Fixed::toInt(void) const {
    return (value >> bits);
}


int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
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
    std::cout << "Destructor called" << std::endl;
}