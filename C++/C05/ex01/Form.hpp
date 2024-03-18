/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:51:19 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/01 15:51:19 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool    signStatus;
        const   int signGrade;
        const   int executeGrade;
    public:
        Form(const std::string& name, int signGrade, int executeGrade);
        Form(const Form& other);
        Form&   operator=(const Form& other);
        ~Form();
        std::string getName() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        bool    getStatus() const;
        bool    beSigned(const Bureaucrat& bureaucrat);

    class   GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const  throw() {
                return "Grade too high";
            }
    };
    class   GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return "Grade too low";
            }
    };
};

std::ostream&   operator<<(std::ostream& out, const Form& other);
#endif