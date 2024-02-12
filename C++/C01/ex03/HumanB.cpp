/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:57:01 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/07 12:57:01 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& humanName) : name(humanName), weapon(NULL) {}

void    HumanB::attack() {
    if (weapon != NULL) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
    else
        std::cout << name << " attacks with fists!!" << std::endl;
}

void    HumanB::setWeapon(Weapon& humanWeapon)
{
    weapon = &humanWeapon;
}

HumanB::~HumanB() {}