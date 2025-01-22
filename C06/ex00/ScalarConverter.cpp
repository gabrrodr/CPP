/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:58:36 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/19 14:58:36 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : c('\0'), i(0), f(0.0f), d(0.0) {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
    *this = copy;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter&  ScalarConverter::operator=(const ScalarConverter& copy) {
    (void)copy;
    return *this;
}

void    ScalarConverter::setString(std::string string) {
    this->literal = string;
    this->setTypes();
}

bool    ScalarConverter::isInt() const {
    
    int    j = 0;
    if ( literal[j] == '-' || literal[j] == '+' )
        j++;
    for ( int i = j; i < (int)literal.length(); i++ ) {
        if ( !std::isdigit( literal[i] ) )
            return false;
    }
    return true;
}

bool    ScalarConverter::isFloat() const {
    if (literal.find('.') == std::string::npos || literal.find('f') != literal.length() - 1
        ||literal.find( '.' ) == 0 || literal.find( '.' ) == literal.length() - 2 )
        return false;
    int found = 0;
    int j = 0;
    if (literal[j] == '-' ||literal[j] == '+' )
        j++;
    for ( int i = j; i < (int)literal.length() - 1; i++ ) {
        if (literal[i] == '.' )
            found++;
        if ( (!std::isdigit(literal[i] ) && literal[i] != '.' ) || found > 1 )
            return false;
    }
    return true;
}


bool    ScalarConverter::isDouble() const {
    if (literal.find( '.' ) == std::string::npos ||literal.find( '.' ) == 0 
        ||literal.find( '.' ) == literal.length() - 1 )
        return false;
    int j = 0;
    int found = 0;
    if (literal[j] == '-' ||literal[j] == '+' )
        j++;
    for ( int i = j; i < (int)literal.length(); i++ ) {
        if (literal[i] == '.' )
            found++;
        if ( ( !std::isdigit(literal[i] ) && literal[i] != '.' ) || found > 1 )
            return false;
    }
    return true;
}

void    ScalarConverter::setTypes() {
    if ((literal.compare("nan") == 0) || (literal.compare("nanf") == 0)
        || (literal.compare("+inf") == 0) || (literal.compare("+inff") == 0)
        || (literal.compare("-inf") == 0) || (literal.compare("-inff") == 0)
        || (literal.length() == 1 && !std::isprint(literal[0]))) {
        type = IMP;
    }
    else if (literal.length() == 1 && ((literal[0] > 32 && literal[0] < 48)
            || (literal[0] > 57 && literal[0] < 127))) {
        type = CHAR;
    }    
    else if (isInt())
        type = INT;
    else if (isFloat())
        type = FLOAT;
    else if (isDouble())
        type = DOUBLE;
    else {
        type = OTHER;
    }
}

int ScalarConverter::stringToInt(const std::string &literal) {
    int i = 0;
    int num = 0;
    int neg = 1;
    if (literal[i] == '-') {
        neg = -1;
        i++;
    }
    for (int c(i); c < (int)literal.length(); c++) {
        num = num * 10 + (literal[c] - '0');
    }
    return (num * neg);
}

float   ScalarConverter::stringToFloat(const std::string& literal) {
    float num;
    sscanf(literal.c_str(), "%f", &num);
    return num;
}

double  ScalarConverter::stringToDouble(const std::string& literal) {
    double num;
    sscanf(literal.c_str(), "%lf", &num);
    return num;
}

void    ScalarConverter::convert() {
    if (type == IMP || type == OTHER)
        return;
    switch (type) {
        case CHAR:
            c = literal[0];
            i = static_cast< int >(c);
            f = static_cast< float >(c);
            d = static_cast< double >(c);
            break;
        case INT:
            i = stringToInt(literal);
            f = static_cast< float >(i);
            d = static_cast< double >(i);
            c = static_cast< char >(i);
            break;
        case FLOAT:
            f = stringToFloat(literal);
            d = static_cast< double >(f);
            c = static_cast< char >(f);
            i = static_cast< int >(f);
            break;
        case DOUBLE:
            d = stringToDouble(literal);
            c = static_cast< char >(d);
            i = static_cast< int >(d);
            f = static_cast< float>(d);
            break;
        default:
            break;
    }
}

void    ScalarConverter::printChar() const {
    if (type == IMP || type == OTHER) {
       std::cout << "Impossible";
    } else if (!std::isprint(c)) {
        std::cout << "non printable";
    } 
    else {
        std::cout << "'" << this->c << "'";
    }
    std::cout << std::endl;
}

void    ScalarConverter::printInt() const {
    
    if (type == IMP || type == OTHER) {
        std::cout << "Impossible";
    } else {
        std::cout << this->i;
    }
    std::cout << std::endl;
}

void    ScalarConverter::printFloat() const {
    if (type == IMP) {
        if (!literal.compare("nanf") || !literal.compare("+inff")
            || !literal.compare("-inff")) {
            std::cout << this->literal;
            } else {
            std::cout << this->literal << "f";
            }
    }
    else if (type == OTHER) {
        std::cout << "Impossible";
    } else {
        if (f - static_cast< int >(f) == 0) {
            std::cout << f << ".0f";
        } else {
            std::cout << f << "f";
        }
    }
    std::cout << std::endl;
}

void    ScalarConverter::printDouble() const {
    if (type == IMP) {
        if (!literal.compare("nan") || !literal.compare("+inf")
            || !literal.compare("-inf"))
            std::cout << this->literal;
        else {
            for (int i = 0; i < (int)literal.length() - 1; i++) {
                std::cout << literal[i];
            }
        }
    }
    else if (type == OTHER) {
        std::cout << "Impossible";
    } else {
        if (d - static_cast<int>(d) == 0)
        std::cout << this->d << ".0";
    }
    std::cout << std::endl;
}

std::ostream&   operator<<(std::ostream& out, const ScalarConverter& converter) {
    out << "char: "; converter.printChar();
    out << "int: "; converter.printInt();
    out << "float: "; converter.printFloat();
    out << "double: "; converter.printDouble();
    return out;
}