/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:30:56 by gabrrodr          #+#    #+#             */
/*   Updated: 2025/01/22 14:32:58 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <stdint.h>
#include <iostream>

struct  Data 
{
    std::string name;
    int number;
};

class Serializer {
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
    public:
        static uintptr_t   serialize(Data* ptr);
        static Data*       deserialize(uintptr_t raw);
};

#endif