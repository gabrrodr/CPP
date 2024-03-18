/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:44:03 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/11 11:44:03 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat  bureaucrat("Tom", 2);
        ShrubberyCreationForm   form1("Shrubbery");

        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm  form3("Pardon");

        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);

        //bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);

        bureaucrat.signForm(form3);
        bureaucrat.executeForm(form3);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
