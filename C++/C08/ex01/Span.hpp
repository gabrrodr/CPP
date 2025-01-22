/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:48:40 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/25 16:18:16 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <list>

class Span {
    private:
        //unsigned int currentSize;
        std::list<int> intList;
        unsigned int _maxSize;
    public:
        Span(unsigned int N);
        Span(const Span& copy);
        Span&   operator=(const Span& copy);
        ~Span();
        void    addNumber(unsigned int number);
        unsigned int    longestSpan( void ) const;
        unsigned int    shortestSpan( void ) const;
};

#endif