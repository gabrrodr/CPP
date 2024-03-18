/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:16:48 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/28 13:16:48 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) {
    this->_type = name;
    std::cout << "This Wronganimal's type is " << name << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void    WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makeSound function called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->_type;
}