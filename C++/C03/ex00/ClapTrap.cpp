/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:26:41 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/21 14:26:41 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPts(10), energyPts(10), attackDamage(0) {
    std::cout << name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default Destructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& copy) {
    this->name = copy.name;
    this->energyPts = copy.energyPts;
    this->hitPts = copy.hitPts;
    this->attackDamage = copy.attackDamage;
    return *this;
}

void    ClapTrap::attack(const std::string& target) {
    if (energyPts > 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << target;
        std::cout << ",causing " << this->attackDamage << " points of damage!" << std::endl;
        energyPts = energyPts - 1;
    }
    else {
        std::cout << "ClapTrap " << this->name << " has no energy left :(" << std::endl;
        //return ;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPts <= amount)
    {
        std::cout << this->name << " is dead!" << std::endl;
        hitPts = 0;
        return ;
    } else {
        std::cout << this->name << " lost " << amount << " of hit points" << std::endl;
        hitPts -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (energyPts <= 0) {
        std::cout << this->name << " has no energy to repair" << std::endl;
        return ;
    } else {
        std::cout << this->name << " got " << amount << " hit points back!" << std::endl;
        energyPts -= 1;
        hitPts += amount;
        std::cout << this->name << " has " << energyPts << " energy points and ";
        std::cout << hitPts << " hitpoints" << std::endl;
    }
}