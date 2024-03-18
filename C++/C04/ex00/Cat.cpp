/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:53:37 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/28 11:53:37 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << this->_type << " is born!" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "meow meow meow" << std::endl;
}

Cat::~Cat() {
    std::cout << "This " << this->_type << " has died :(" << std::endl;
}