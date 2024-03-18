/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:11:15 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/13 15:11:15 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
impossible cases; activate bool.
float and double can print nan, nanf, inff, etc
but char and int will print "impossible"

try and catch to see what it is.
set type
if its OTHER its impossible and everywhere will print impossible
convert base on type
set to the private members after conversion
print.
if impossible dont convert, print.


set the string given in command line. put it in the convert function
check the string to see what it is
set what it is to the value on the private
convert it to the things that it is not

*/
#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Correct usage: ./convert <number>" << std::endl;
        return 1;
    }

}