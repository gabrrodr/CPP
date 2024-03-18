/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:37:07 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/01 17:37:07 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade) {
    if (signGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150) {
        throw Form::GradeTooLowException();
        this->signStatus = false;
    }
    std::cout << "the form named " << name << " arrived at the desk" << std::endl;
}

Form::Form(const Form& other) : name(other.getName()), signGrade(other.getSignGrade()), executeGrade(other.getExecuteGrade()) {
}

Form&   Form::operator=(const Form& other) {
    if (this != &other)
        signStatus = other.signStatus;
    return *this;
}

Form::~Form() {
}

std::string Form::getName() const {
    return this->name;
}

int Form::getSignGrade() const {
    return this->signGrade;
}

int Form::getExecuteGrade() const {
    return this->executeGrade;
}

bool    Form::getStatus() const {
    return this->signStatus;
}

bool    Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > this->signGrade) {
        throw Form::GradeTooLowException();
    }    
    else {
        this->signStatus = true;
    }
    return this->signStatus;
}

std::ostream&   operator<<(std::ostream& out, const Form& other) {
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