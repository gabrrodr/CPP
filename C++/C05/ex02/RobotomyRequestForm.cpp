/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:10:18 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/07 15:10:18 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45) , target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), target(other.target) {}

RobotomyRequestForm&    RobotomyRequestForm::operator=(RobotomyRequestForm& other) {
    (void)other;
    return *this;
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    else {
        std::cout << "drilllll drilllll drilllll...." << std::endl;
        static int  i;
        if ( i % 2 == 0)
            std::cout << this->target << " has been robotomized" << std::endl;
        else
            std::cout << "the robotomy for " << this->target << " has failed" << std::endl;
        i++;
    }
}

RobotomyRequestForm::~RobotomyRequestForm() {}