/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:14:29 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/06 16:14:29 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat " << name << " started working" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){
}

Bureaucrat::~Bureaucrat() {
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other)
        grade = other.getGrade();
    return *this;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

std::string Bureaucrat::getName() const {
    return this->name;
}

void    Bureaucrat::incrementGrade() {
    if (grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else {
        grade--;
    }
}

void    Bureaucrat::decrementGrade() {
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else {
        grade++;
    }
}

void    Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned(*this);
        std::cout << *this << " signed " << form.getName() << std::endl;
    }
    catch (AForm::GradeTooLowException &e) {
        std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(const AForm& form) const {
    if (!form.getStatus()) {
        throw AForm::NotSignedException();
    } else {
        try 
        {
            form.execute(*this);
        } 
        catch (std::exception& e) {
            std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
        }
    }
}

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& other) {
    out << other.getName() << ", bureaucrat grade " << other.getGrade();
    return out;
}