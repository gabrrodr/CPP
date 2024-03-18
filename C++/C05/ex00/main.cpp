/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:09:01 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/29 17:09:01 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat  bureaucrat("Trump", 150);

        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
    }
    catch ( Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}