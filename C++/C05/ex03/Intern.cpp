/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:39:23 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/11 14:39:23 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

AForm*  Intern::makeForm(std::string form, std::string target) {
    std::string formsId[] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
    };

    AForm*  forms[] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };

    for (int i = 0; i < 3; i++) {
        if (form == formsId[i])
        {
            std::cout << "Intern creates " << formsId[i] << std::endl;
            return forms[i];
        }
    }
    std::cout << "Fábio the intern could not find the form : " << form << std::endl;
    return NULL;
}