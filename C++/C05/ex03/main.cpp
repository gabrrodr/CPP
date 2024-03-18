/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:30:21 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/11 14:30:21 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    try {
        Bureaucrat  bureaucrat("Tom", 2);
        Intern  intern;
        AForm* i = intern.makeForm("marketing budget", "target");

        if (i) {
            bureaucrat.signForm(*i);
            bureaucrat.executeForm(*i);
        }
        else {
            std::cout << "The intern is very incompetent so we have a form missing" << std::endl;
        }
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
