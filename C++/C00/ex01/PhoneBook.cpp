/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:01:41 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/23 14:01:41 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : length(0) {}

PhoneBook::~PhoneBook() {}

void    PhoneBook::addContact() {
    static int  i;
    this->list[i % 8].getContact();
    this->list[i % 8].setIndex(i % 8);
    if (length < 8)
        length += 1;
    if (i < 7)
        i++;
    else
        i = 0;
}

void    PhoneBook::search() {
    int input;

    while (true) {
        std::cout << "Contact index: " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input < length))
		{
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			list[input].showContactInfo(input);
			break;
		}
		else 
        {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Invalid index (Please try again)" << std::endl;
		}
    }
    return ;
}

void    PhoneBook::display() {
    if (!this->length)
	{
		std::cout << std::setw(10) << "|  You have no friends to call loser |" << std::endl << std::endl;
		return;
    }
    std::cout << "------------- PHONBOOK CONTACTS -------------" << std::endl << std::endl;
    std::cout << std::setw(10) << "INDEX" << std::flush;
	std::cout << "|" << std::setw(10) << "FIRST NAME" << std::flush;
	std::cout << "|" << std::setw(10) << "LAST NAME" << std::flush;
	std::cout << "|" << std::setw(10) << "NICKNAME" << std::flush;
	std::cout << std::endl;
    for (int i = 0; i < length; i++) {
        this->list[i].showContact(i);
        std::cout << "---------------------------------------------" << std::endl;
    }
    std::cout << std::endl;
    search();
}