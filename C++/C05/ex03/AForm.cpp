/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:29:24 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/11 14:29:24 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade) {
    if (signGrade < 1)
        throw AForm::GradeTooHighException();
    if (signGrade > 150) {
        throw AForm::GradeTooLowException();
    }
    this->signStatus = false;
    std::cout << "the form named " << name << " arrived at the desk" << std::endl;
}

AForm::AForm(const AForm& other) : name(other.getName()), signGrade(other.getSignGrade()), executeGrade(other.getExecuteGrade()) {
}

AForm&   AForm::operator=(const AForm& other) {
    if (this != &other)
        signStatus = other.signStatus;
    return *this;
}

AForm::~AForm() {
}

std::string AForm::getName() const {
    return this->name;
}

int AForm::getSignGrade() const {
    return this->signGrade;
}

int AForm::getExecuteGrade() const {
    return this->executeGrade;
}

bool    AForm::getStatus() const {
    return this->signStatus;
}

bool    AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > this->signGrade) {
        throw AForm::GradeTooLowException();
    }    
    else {
        this->signStatus = true;
    }
    return this->signStatus;
}

std::ostream&   operator<<(std::ostream& out, const AForm& other) {
    out << "---------- Form Info ----------" << std::endl;
    out << "Form name: " << other.getName() << std::endl;
    out << "Grade to sign: " << other.getSignGrade() << std::endl;
    out << "Grade to execute: " << other.getExecuteGrade() << std::endl;
    if (other.getStatus() == true)
        out << "Status : signed" << std::endl;
    else {
        out << "Status : to be signed" << std::endl;
    }
    out << "-------------------------------" << std::endl;
    return out;
}