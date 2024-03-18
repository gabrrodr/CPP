/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:17:02 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/14 13:17:02 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Converter.hpp"

Converter::Converter() {}

Converter::Converter(const Converter& copy) {
    this = copy;
}

Converter&  operator=(const Converter& copy) {
    return *this;
}

void    Converter::setString(const std::string literal) const {
    this->literal = literal;
}

bool    Converter::isInt() const {
    try {
        int i = std::stoi(literal);
        return true;
    } catch (const std::invalid_argument& e) {
        return false;
    } catch (const std::out_of_range& e) {
        return false;
    }
}

bool    Converter::isFloat() const {
    try {
        float f = std::stof(literal);
    } catch (const std::invalid_argument& e) {
        return false;
    } catch (const std::out_of_range& e) {
        return false;
    }
}

bool    ScalarConverter::isDouble() const {
    try {
        double d = std::stod(string);
        return true;
    } catch (const std::invalid_argument& e) {
        return false;
    } catch (const std::out_of_range& e) {
        return false;
    }
}

bool    Converter::checkDecimals() const {
    int counter = 0;
    if (literal.find('.') && 
}
void    Converter::setTypes() const {
    if ((literal.compare("nan") == 0) || (literal.compare("nanf") == 0)
        || (literal.compare("+inf") == 0) || (literal.compare("+inff") == 0)
        || (literal.compare("-inf") == 0) || (literal.compare("-inff") == 0)
        || (literal.length() == 1 && !std::isprint(literal[0]))) {
        type = IMP;
    }
    else if (literal.length() == 1 && (literal[0] > 32 && literal[0] < 127))
        type  = CHAR;
    else if (isInt())
        type = INT;
    else if (isFloat() && checkDecimals())
        type = FLOAT;
    else if (isDouble() && checkDecimals())
        type = DOUBLE;
    else {
        type = OTHER;
    }
}

void    Convert::convert(const string& literal) {
    switch (type) {
        case CHAR:
            c = literal[0];
            i = static_cast< int>(c);
            f = static_cast< float >(c);
            d = static_cast< double >(c);
            break;
        case INT:
            i = std::stoi(literal);
            f =
            
    }
}