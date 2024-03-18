/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:51:51 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/07 14:51:51 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.target) {}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(ShrubberyCreationForm& other) {
    (void)other;
    return *this;
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (this->getStatus() == false) {
        throw AForm::NotSignedException();
    }
    else if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    else {
        std::string   outfile = target + "_shrubbery";
        std::fstream    file;
        file.open(outfile.c_str(), std::fstream::out);
        if (file.is_open()) {
            file << "                      ___" << std::endl;
            file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
            file << "             ,-'          __,,-- \\" << std::endl;
            file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
            file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
            file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
            file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
            file << "     (     ,-'                  `." << std::endl;
            file << "      `._,'     _   _             ;" << std::endl;
            file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
            file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
            file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
            file << "                \"Hb HH dF" << std::endl;
            file << "                 \"HbHHdF" << std::endl;
            file << "                  |HHHF" << std::endl;
            file << "                  |HHH|" << std::endl;
            file << "                  |HHH|" << std::endl;
            file << "                  |HHH|" << std::endl;
            file << "                  |HHH|" << std::endl;
            file << "                  dHHHb" << std::endl;
            file << "                .dFd|bHb.               o" << std::endl;
            file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
            file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
            file << "##########################################" << std::endl;
            file.close();
        }
    }
}


ShrubberyCreationForm::~ShrubberyCreationForm() {}