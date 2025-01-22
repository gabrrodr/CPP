/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:40:19 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/22 14:10:06 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <stdexcept>
#include <iostream>


template <typename T>
class Array {
    private:
        T*              array;
        unsigned int    _size;
    public:
        Array() : array(NULL), _size(0) {};
        Array(unsigned int n) : _size(n) {
            array = new T[n];
            if (array == NULL) {
                throw MemoryAllocationFailure();
            }
        }
        
        Array(const Array& copy) : _size(copy.size()) {
            array = new T[copy.size()];
            if (array == NULL) {
                throw MemoryAllocationFailure();
            }
            for (unsigned int i = 0; i < size; i++) {
                array[i] = copy.array[i];
            }
        }
        
        Array&  operator=(const Array& copy) {
            if (this != &copy) {
                delete [] array;
                array = new T[copy.size()];
                if (array == NULL) {
                    throw MemoryAllocationFailure();
                }
                _size = copy._size;
                for (unsigned int i = 0; i < _size; i++) {
                    array[i] = copy.array[i];
                }
            }
            return *this;
        }
        
        ~Array() { delete [] array; };
        
        T&  operator[](unsigned int index) {
                if (index >= _size) {
                    throw OutOfBounds();
                }
                return array[index];
            }

        const T&    operator[](unsigned int index) const {
            if (index >= _size) {
                throw OutOfBounds();
            }
            return array[index];
        }
        
        unsigned int   size() const {
            return _size;
        }
    class   MemoryAllocationFailure : public std::exception {
        public:
            const char* what() const throw() { return "Memory allocation failure"; };
    };
    
    class   OutOfBounds : public std::exception {
        public:
            const char* what() const throw() { return "the element is out of bounds"; };
    };
};

template < typename T >
std::ostream&   operator<<( std::ostream& out, const Array<T>& array ) {
    for ( unsigned int i = 0; i < array.size(); i++ )
        out << array[i] << " ";
    return out;
}

