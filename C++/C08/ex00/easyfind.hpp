/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:05:51 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/22 17:49:41 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void    easyfind(T& container, int value) {
    if (std::find(container.begin(), container.end(), value) != container.end()) {;
         std::cout << "Found value " << value << std::endl;
    }
    else {
        std::cout << "Value " << value << " not found in the array." << std::endl;
    }
}
