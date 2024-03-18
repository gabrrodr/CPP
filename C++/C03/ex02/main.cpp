/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:06:28 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 12:06:28 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap    one("gaby");
    FragTrap    two("diogo");

    one.attack("demonio");
    two.attack("demonio");
    one.takeDamage(120);
    one.takeDamage(1);
    two.takeDamage(10);
    one.beRepaired(5);
    one.beRepaired(5);
    one.attack("demonio");
    return (0);
}