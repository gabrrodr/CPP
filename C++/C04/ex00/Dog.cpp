/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:29:31 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/26 15:29:31 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << this->_type << " was born" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "woof woof grrr.." << std::endl;
}

Dog::~Dog() {
    std::cout << "this " << this->_type << " has died :(" << std::endl;
}