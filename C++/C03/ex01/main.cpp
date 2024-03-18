/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:31:19 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/21 16:31:19 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap    one("gaby");

    one.attack("demonio");
    one.takeDamage(120);
    one.takeDamage(1);
    one.beRepaired(5);
    one.beRepaired(5);
    one.attack("demonio");
    return (0);
}