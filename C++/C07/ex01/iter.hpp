/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:58:46 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/20 16:45:39 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void    iter(T *arr, size_t length, void (*f)(T &)) {
    for (size_t i = 0; i < length; i++) {
        f(arr[i]);
    }
}

template <typename T>
void    print(T &i) {
    std::cout << i << std::endl;
}