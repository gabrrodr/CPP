/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:35:13 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 11:35:13 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPts(100), _energyPts(100), _attackDamage(30) {
    std::cout << name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default Destructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& copy) {
    this->_name = copy._name;
    this->_energyPts = copy._energyPts;
    this->_hitPts = copy._hitPts;
    this->_attackDamage = copy._attackDamage;
    return *this;
}

void    ClapTrap::attack(const std::string& target) {
    if (_energyPts > 0) {
        std::cout << "ClapTrap " << this->_name << " attacks " << target;
        std::cout << ",causing " << this->_attackDamage << " points of damage!" << std::endl;
        _energyPts = _energyPts - 1;
    }
    else {
        std::cout << "ClapTrap " << this->_name << " has no energy left :(" << std::endl;
        //return ;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPts <= amount)
    {
        std::cout << this->_name << " is dead!" << std::endl;
        _hitPts = 0;
        return ;
    } else {
        std::cout << this->_name << " lost " << amount << " of hit points" << std::endl;
        _hitPts -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPts <= 0) {
        std::cout << this->_name << " has no energy to repair" << std::endl;
        return ;
    } else {
        std::cout << this->_name << " got " << amount << " hit points back!" << std::endl;
        _energyPts -= 1;
        _hitPts += amount;
        std::cout << this->_name << " has " << _energyPts << " energy points and ";
        std::cout << _hitPts << " hitpoints" << std::endl;
    }
}