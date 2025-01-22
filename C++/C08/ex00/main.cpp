/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:02:06 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/22 17:56:56 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> Vec = {1, 2, 3, 4, 5, 6};
    int value = 3;
    
    easyfind(Vec, value);
    
    std::list<int> Lst = {2, 4, 6, 8};
    easyfind(Lst, value);
    
    return 0;
}