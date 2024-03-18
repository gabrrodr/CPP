/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:35:18 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 16:35:18 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void    Contact::setIndex(int i) {
    this->index = i;
}
std::string Contact::getField(std::string fields) {
    std::string input;
    while (true) {
        std::cout << fields << std::flush;
        if (std::getline(std::cin, input) && !input.empty())
            return input;
        else {
            std::cin.clear();
            std::cout << "Invalid. Try again" << std::endl;
        }
    }
}
void    Contact::getContact() {
    this->firstName = this->getField("First Name: ");
    this->lastName = this->getField("Last Name: ");
    this->nickname = this->getField("Nickname: ");
    this->phoneNumber = this->getField("Phone Number: ");
    this->darkestSecret = this->getField("What's your darkest secret?");
    std::cout << std::endl;
}

std::string    Contact::truncate(std::string field) const {
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}
void    Contact::showContactInfo(int i) const {
    std::cout << "Contact number: " << i << std::endl;
    std::cout << "First Name: " << this->firstName << std::endl;
    std::cout << "Last Name: " << this->lastName << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone number: " << this->phoneNumber << std::endl;
    std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}
void    Contact::showContact(int i) const {
    std::cout << std::setw(10) << i << std::flush;
    std::cout << std::setw(10) << truncate(this->firstName) << std::flush;
    std::cout << std::setw(10) << truncate(this->lastName) << std::flush;
    std::cout << std::setw(10) << truncate(this->nickname) << std::flush;
    std::cout << std::endl;
}