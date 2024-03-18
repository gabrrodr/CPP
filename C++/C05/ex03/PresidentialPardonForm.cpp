/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:30:41 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/11 14:30:41 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), target(other.target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other) {
    (void)other;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    else
        std::cout << this->target << " has been pardoned by Zaphod Beeblebox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
