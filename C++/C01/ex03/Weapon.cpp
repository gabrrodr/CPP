/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:08:40 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/06 14:08:40 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : type(weaponType) {};

Weapon::~Weapon() {}

const std::string&  Weapon::getType() {
    return type;
}

void    Weapon::setType(std::string newType) {
    this->type = newType;
}