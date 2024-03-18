/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:44:25 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 12:44:25 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";

    std::cout << "DiamondTrap " << this->_name << " is born!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::whoAmI() {
    std::cout << "I'm a Diamond Trap called " << this->_name << " and my ClapTrap friend is called ";
    std::cout << ClapTrap::_name << std::endl;
}


