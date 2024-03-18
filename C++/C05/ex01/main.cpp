/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:23:38 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/06 14:23:38 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main () {
    try {
        Bureaucrat  bureaucrat("Joe", 45);
        Form    form("contract37", 46, 0);

        std::cout << form << std::endl;
        std::cout << bureaucrat << std::endl;

        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}