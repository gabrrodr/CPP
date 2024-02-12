/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:15:02 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/05 15:36:46 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	invalidInput(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "wrong number of arguments" << std::endl;
		return (1);
	}
	char*	endptr;
	long tmp = std::strtol(argv[1], &endptr, 10);
	if (*endptr != '\0') {
		std::cout << "Number is out of range" << std::endl;
		return (1);
	}
	if ((tmp == 0 && *endptr == argv[1][0]) || tmp <= 0) {
		std::cout << "number must be a positive integer" << std::endl;
		return (1);
	}
	return (0);
}
int	main(int argc, char **argv)
{
	int	N;
	Zombie	*horde;
	
	if (invalidInput(argc, argv))
		return (1);
	N = std::atoi(argv[1]);
	horde = zombieHorde(N, "Mark");
	for (int i = 0; N > i; ++i) {
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}