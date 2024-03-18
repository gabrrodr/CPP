/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:00:49 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 15:00:49 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() : length(0) {
    std::cout << "Constructor of phonebook called" << std::endl;
    
}

PhoneBook::~PhoneBook() {
    std::cout << "Destructor of phonebook called" << std::endl;
}

void    PhoneBook::addContact() {
    static int  i;

    this->list[i % 8].getContact();
    this->list[i % 8].setIndex(i % 8);
    if (this->length < 8)
        this->length += 1;
    i++;
}

void    PhoneBook::display() const {
    if (!this->length) {
        std::cout << "You have no friends to call" << std::endl;
        return ;
    }
    std::cout << std::setw(10) << "INDEX" << std::flush;
	std::cout << "|" << std::setw(10) << "FIRST NAME" << std::flush;
	std::cout << "|" << std::setw(10) << "LAST NAME" << std::flush;
	std::cout << "|" << std::setw(10) << "NICKNAME" << std::flush;
    std::cout << "-------------------------------------------" << std::endl;
    for (int i = 0; i <= len; i++) {
        this->contacts[i].showContact(i);
        std::cout << "-------------------------------------------" << std::endl;
    }
    std::cout << std::endl;
    search();
}

void    PhoneBook::search() {
    int i;
    while (true) {
        std::cout << "What contact do you need?: " << std::flush;
        std::cin >> i;
    }
    if(std::cin.good() && (input >= 0 && input < 8)) {
        this->contacts[input].showContactInfo(input);
    }
}