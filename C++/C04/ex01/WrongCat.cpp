/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:39:02 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/28 13:39:02 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << this->_type << " is born!" << std::endl;
}

void    WrongCat::makeSound() const {
    std::cout << "im not a cat bro" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "This " << this->_type << " has died :(" << std::endl;
}