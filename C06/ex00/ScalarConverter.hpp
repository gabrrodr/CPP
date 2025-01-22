/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:58:27 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/19 14:58:27 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cstdio>





enum e_type {
    INT,
    FLOAT,
    CHAR,
    DOUBLE,
    IMP,
    OTHER
};

class ScalarConverter {
    private:
        std::string literal;
        char    c;
        int     i;
        float   f;
        double  d;
        e_type      type;
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter&  operator=(const ScalarConverter& copy);

    public:
        
        void    setString(std::string literal);
        void    setTypes();
        bool    isFloat() const;
        bool    isInt() const;
        bool    isDouble() const;
        void    convert();
        int     stringToInt(const std::string& literal);
        float   stringToFloat(const std::string& literal);
        double  stringToDouble(const std::string& literal);
        void    printChar() const;
        void    printInt() const;
        void    printFloat() const;
        void    printDouble() const;
        ~ScalarConverter();
};

std::ostream&   operator<<(std::ostream& out, const ScalarConverter& converter);
#endif