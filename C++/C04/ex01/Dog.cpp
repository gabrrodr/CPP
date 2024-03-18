/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:37:10 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/28 13:37:10 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << this->_type << " was born" << std::endl;
    brain = new Brain;
}

void    Dog::makeSound() const{
    std::cout << "woof woof grrr.." << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "this " << this->_type << " has died :(" << std::endl;
}