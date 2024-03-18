/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:50:00 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/29 13:50:00 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Default constructor called" << std::endl;
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

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& other) {
    out << other.getName() << ", bureaucrat grade " << other.getGrade();
    return out;
}