/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:19:23 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/13 14:19:23 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter() : c('\0'), i(0), f(0.0f), d(0.0) {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    *this = other;
}

ScalarConverter&    ScalarConverter::operator=(const ScalarConverter& other) {
    if (this != &other) {
        i = other.getInt();
        f = other.getFloat();
        c = other.getChar();
        d = other.getDouble();
    }
    return *this;
}

void    ScalarConverter::setString(const std::string string) const{

    this->string = string;
}

std::string    ScalarConverter::getString() const {
    return this->string;
}

bool    ScalarConverter::isLiteral() const {
    if ((string.compare("nan") == 0) || (string.compare("nanf") == 0)
        || (string.compare("+inf") == 0) || (string.compare("+inff") == 0)
        || (string.compare("-inf") == 0) || (string.compare("-inff") == 0)) {
            return true;
        }
    return false;
}

bool    ScalarConverter::isInt() const {
    try {
        int i = std::stoi(string);
        return true;
    } catch (const std::invalid_argument& e) {
        return false;
    } catch (const std::out_of_range& e) {
        return false;
    }
}

bool    ScalarConverter::isFloat() const {
    try {
        float f = std::stof(string);
        return true;
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

void    ScalarConverter::define() const {
    if (string.length() == 1 && string.isalpha(string[0]) && std::isprint(string[0]))
        type = CHAR;
    else if (isInt())
        type = INT;
    else if (isFloat())
        type = FLOAT;
    else if (isDouble())
        type = DOUBLE;
    else if (isLiteral())
        type = LITERAL;
    else {
        type = OTHER;
    }
}
void    ScalarConverter::setter() const {
    
}

double  ScalarConverter::getDouble() const {
    return this->d;
}

char    ScalarConverter::getChar() const {
    return this->c;
}

float   ScalarConverter::getFloat() const {
    return this->f;
}

int ScalarConverter::getInt() const {
    return this->i;
}


void    ScalarConverter::convert(const std::string& literal) {
    if ()
    switch (type) {
        case CHAR:
            c = literal[0];
            i = static_cast<int>(c);
            f = static_cast<float>(c);
            d = static_cast<double>(c);
            break;
        case INT:
            c = getChar();
            i = static_cast<int>(c);
            f = static_cast<float>(c);
            d = static_cast<double>(c);
    }
    
}

std::ostream&   operator<<(std::ostream& out, const ScalarConverter& converter) {
    out << "---------- VALUES: ----------" << std::endl;
    out << "string literal: " << converter.getString() << std::endl;
    out << "As char: " << 
    out << "As int: " <<
    out << "As float: " <<
    out << "As double: " <<
}
ScalarConverter::~ScalarConverter() {}