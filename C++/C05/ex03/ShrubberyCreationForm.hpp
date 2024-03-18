/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:31:48 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/11 14:31:48 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATIONFORM_HPP
#define CREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    private:
        const std::string   target;

    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);

        ShrubberyCreationForm&  operator=(ShrubberyCreationForm& other);
        void    execute(const Bureaucrat& executor) const;
        ~ShrubberyCreationForm();
};
#endif