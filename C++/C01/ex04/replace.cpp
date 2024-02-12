/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:19:03 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/08 15:19:03 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(const std::string &filename, const std::string &s1, const std::string &s2) : filename(filename), s1(s1), s2(s2) {
    std::cout << "Replace constructor called" << std::endl;
}

Replace::~Replace() {
    std::cout << "Replace destructor called" << std::endl;
}

void    Replace::replace() {
    
    std::ifstream   inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return ;
    }
    std::string line;
    std::string content;
    std::ofstream   outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: could not open file " << std::endl;
        return ;
    }
    while (std::getline(inputFile, line))
    {
        size_t  pos = line.find(s1, 0);
        while (pos != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos = line.find(s1, pos + s2.length());
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    std::cout << "Success: copy and replace done" << std::endl;
}