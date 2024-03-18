/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:03:26 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/21 13:03:26 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
    if ( bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15)) == true) {
        std::cout << "Point is inside" << std::endl;
    } else {
        std::cout << "Point is not inside" << std::endl;
    }
    return (0);
}