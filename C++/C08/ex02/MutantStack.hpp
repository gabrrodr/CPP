/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:28:23 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/25 17:04:56 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <string>

template <typename T>
class MutantStack {
    private:
        std::stack<T> internalStack;
    public:
        MutantStack();
        MutantStack(const MutantStack& copy) {}
        MutantStack<T>&    operator=(const MutantStack<T>& copy);
        ~MutantStack();
        
    
}

class iterator {
    private:
        MutantStack<T>& stack;
        std::stack<T>::container_type::iterator it;
    public:
        iterator(MutantStack<T>& copy) : stack(copy), it(copy.internalStack.container.begin()) {}
}