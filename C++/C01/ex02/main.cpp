/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:03:20 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/05 16:03:20 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string     myString = "HI THIS IS BRAIN";
    std::string*    stringPTR = &myString;
    std::string&    stringREF = myString;

    std::cout << "The memory address of the string variable is " << &myString << std::endl;
    std::cout << "The memory address held by stringPTR is " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is " << &stringREF << std::endl;

    std::cout << "The value of the string variable is " << myString << std::endl;
    std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is " << stringREF << std::endl;
    return (0);
}
