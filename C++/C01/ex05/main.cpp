/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:46:05 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/12 11:46:05 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl    Karen;

    Karen.complain("DEBUG");
    Karen.complain("INFO");
    Karen.complain("WARNING");
    Karen.complain("ERROR");

    Karen.complain("");
    Karen.complain("TEST");
    return (0);
}