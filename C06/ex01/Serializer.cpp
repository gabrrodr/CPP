/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:56:14 by gabrrodr          #+#    #+#             */
/*   Updated: 2025/01/22 15:53:26 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer(){}

Serializer::Serializer(const Serializer& other) {
    *this = other;
}

Serializer& Serializer::operator=(const Serializer& other) {
    if (this == &other)
    {
        return *this;
    }
    return *this;
}

uintptr_t   Serializer::serialize(Data* ptr) {
    uintptr_t result = reinterpret_cast< uintptr_t >(ptr);
    return result;
}

Data*       Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}