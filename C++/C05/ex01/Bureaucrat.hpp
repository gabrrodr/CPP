/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:49:42 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/01 15:49:42 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private :
        const std::string   name;
        int grade;
    public :
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        std::string    getName() const;
        int    getGrade() const;
        void    incrementGrade();
        void    decrementGrade();
        void    signForm(Form& form);
        ~Bureaucrat();

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

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& other);
#endif