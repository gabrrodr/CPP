/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:01:50 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/25 16:18:21 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& copy) {
    *this = copy;
}

Span&   Span::operator=(const Span& copy) {
    if (this != &copy) {
        intList = copy.intList;
        _maxSize = copy._maxSize;
    }
    return *this;
}

Span::~Span() {}

void    Span::addNumber(unsigned int number) {
    if (intList.size() >= _maxSize)
        throw std::out_of_range("Span::addNumber : List is full");
    intList.push_back(number);
}

unsigned int    Span::longestSpan( void ) const {
    if ( intList.size() < 2 )
        throw std::out_of_range("Span::longestSpan: list is empty");
    return ( *std::max_element( intList.begin(), intList.end() ) - *std::min_element( intList.begin(), intList.end() ) );
}

unsigned int Span::shortestSpan( void ) const {
    if ( intList.size() < 2 )
        throw std::out_of_range("Span::shortestSpan: list is empty");
    unsigned int  min = Span::longestSpan();
    for ( std::list<int>::const_iterator it = intList.begin(); it != intList.end(); ++it ) {
        for ( std::list<int>::const_iterator it2 = intList.begin(); it2 != intList.end(); ++it2 ) {
            if ( it == it2 ) continue;
            if ( std::abs( *it2 - *it ) <  static_cast< int >( min ) )
                min = std::abs( *it2 - *it );
        }
    }
    return min;
}

