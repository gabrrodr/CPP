/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:15:39 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 15:15:39 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    PhoneBook   book;
    std::string input;
    std::cout << "PhoneBook open! What do you need? ";
    while (std::getline(std::cin, input).good()) {
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        if (!input.compare("ADD"))
            book.addContact();
        else if (!input.compare("SEARCH")) {
            book.display();
        } 
        else if (!input.compare("EXIT"))
            return 0;
        
        std::cout << "> " << std::flush;
    }
    std::cout << std::endl;
    return (0);
}