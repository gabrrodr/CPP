/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:10:52 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/29 12:10:52 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << this->_type << " is born!" << std::endl;
    brain = new Brain();
}

void    Cat::makeSound() const {
    std::cout << "meow meow meow" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "This " << this->_type << " has died :(" << std::endl;
}