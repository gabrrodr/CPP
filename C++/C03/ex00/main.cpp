/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:45:43 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/21 15:45:43 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap    Player("dummy");
    Player.attack("another dummy");
    Player.takeDamage(14);
    Player.beRepaired(2);
    return (0);
}