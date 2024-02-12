/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:20:59 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/05 15:36:20 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie*	Horde;
	Horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		new (&Horde[i]) Zombie(name);
	}
	return Horde;
}