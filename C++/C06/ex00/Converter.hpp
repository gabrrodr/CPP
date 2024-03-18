/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:06:53 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/14 13:06:53 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <iostream>

enum e_type {
    INT,
    FLOAT,
    CHAR,
    DOUBLE,
    IMP,
    OTHER
};

class Converter {
    private:
        std::string literal;
        char    c;
        int     i;
        float   f;
        double  d;
        e_type      type;
    public:
        Converter();
        Converter(const Converter& copy);
        Converter&  operator=(const Converter& copy);
        void    setString(const std::string literal) const;
        void    setTypes() const;
        bool    impossibleCases() const;
        void    convert(const std::string& literal);
        ~Converter();
}

#endif