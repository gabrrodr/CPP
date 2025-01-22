/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:23:09 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/22 14:12:31 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    Array<int>   intArray1(10);
    Array<int>   intArray2(5);

    for (unsigned int i = 0; i < intArray1.size(); i++ )
        intArray1[i] = i * 2;
        
    for (unsigned int i = 0; i < intArray2.size(); i++ )
        intArray2[i] = i * 1;
    
    std::cout << "Int Array 1: " << intArray1 << std::endl;
    std::cout << "int Array 2: " << intArray2 << std::endl;

    intArray2 = intArray1;

    std::cout << "int Array 2: " << intArray2 << std::endl;
    
    try {
        std::cout << "Accessing a valid index: " << intArray1[5] << std::endl;
        std::cout << "Accessing an invalid index: " << intArray1[10] << std::endl;
    } catch (const Array<int>::OutOfBounds& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return ( 0 );
}
