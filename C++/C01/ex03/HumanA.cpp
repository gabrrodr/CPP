/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:25:17 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/07 12:25:17 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon& humanWeapon) : name(humanName), weapon(humanWeapon) {}

HumanA::~HumanA() {}

void    HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}