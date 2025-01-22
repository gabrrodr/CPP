/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:23:27 by gabrrodr          #+#    #+#             */
/*   Updated: 2025/01/22 14:44:07 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
    
    Data* data = new Data;
    data->name = "Gabriela";
    data->number = 123;
    
    uintptr_t raw = Serializer::serialize(data);
    Data *deserealized = Serializer::deserialize(raw);
    
    std::cout << "Original Data ptr: " << data << std::endl;
    std::cout << "Deserealized Data ptr: " << deserealized << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    
    std::cout << "Original name: " << data->name << std::endl;
    std::cout << "Deserealized name: " << deserealized->name << std::endl;

    std::cout << "Original age: " << data->number << std::endl;
    std::cout << "Deserealized age: " << deserealized->number << std::endl;

    delete data;

    return 0;
}