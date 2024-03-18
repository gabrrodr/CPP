/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:09:06 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/29 12:09:06 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string name) {
    this->_type = name;
    std::cout << "This animal's type is " << name << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
    
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void    Animal::makeSound() const {
    std::cout << "Animal makeSound function called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return this->_type;
}