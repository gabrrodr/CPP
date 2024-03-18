/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:20:05 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/06 16:20:05 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool    signStatus;
        const   int signGrade;
        const   int executeGrade;

        AForm();
    public:
        AForm(const std::string& name, int signGrade, int executeGrade);
        AForm(const AForm& other);
        AForm&   operator=(const AForm& other);
        virtual ~AForm();
        std::string getName() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        bool    getStatus() const;
        bool    beSigned(const Bureaucrat& bureaucrat);
        virtual void    execute(const Bureaucrat& executor) const = 0;


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
    class   NotSignedException : public std::exception {
        public : virtual const char* what() const throw() {
            return "Form not signed";
        }
    };
};

std::ostream&   operator<<(std::ostream& out, const AForm& other);
#endif