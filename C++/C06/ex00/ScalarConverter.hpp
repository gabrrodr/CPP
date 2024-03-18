/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:02:24 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/13 14:02:24 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <fstream>

enum e_type {
    INT,
    FLOAT,
    CHAR,
    DOUBLE,
    LITERAL,
    OTHER
};

class ScalarConverter {
    private:
        std::string string;
        e_type    type;

        char    c;
        int     i;
        float   f;
        double  d;
        bool    impossible;
        
    public :
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        void    setString(const std::string string) const;
        void    getString() const;
        bool    isLiteral() const;
        bool    isInt() const;
        bool    isFloat() const;
        bool    isDouble() const;
        void    define() const;
        char    getChar() const;
        int     getInt() const ;
        float   getFloat() const;
        double  getDouble() const;
        static void convert(const std::string& literal);
        int isPseudoLiteral();
        ~ScalarConverter();
};

std::ostream&   operator<<(std::ostream& out, const ScalarConverter& converter);

#endif