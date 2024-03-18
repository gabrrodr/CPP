/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:26:32 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/12 13:26:32 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    Karen;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    if (argc != 2) {
        std::cout << "Usage: ./harlFilter <message>" << std::endl;
        return (1);
    }
    int stop = 0;
    for (int i = 0; i < 4; i++) {
        if (!levels[i].compare(argv[1])) {
           stop = ++i;
           break;
        }
    } 
    switch (stop)
    {
        case 1:
            Karen.complain("DEBUG");
            std::cout << std::endl;
            __attribute__((fallthrough));
        case 2:
            Karen.complain("INFO");
            std::cout << std::endl;
            __attribute__((fallthrough));
        case 3:
            Karen.complain("WARNING");
            std::cout << std::endl;
            __attribute__((fallthrough));
        case 4:
            Karen.complain("ERROR");
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Karen, quit it, damnit! ]" << std::endl;
    }
    return (0);
}