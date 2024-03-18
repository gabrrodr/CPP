/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:35:30 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 11:35:30 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
    std::cout << _name << " is born hihi!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor of ScavTrap called" << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    if (_energyPts > 0) {
        std::cout << "ScavTrap " << _name << " attacks " << target;
        std::cout << ",causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPts -= 1;
    }
    else {
        std::cout << "ScavTrapTrap " << _name << " has no energy left :(" << std::endl;
        //return ;
    }
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}