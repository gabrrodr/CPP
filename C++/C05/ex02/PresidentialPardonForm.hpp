/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:38:35 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/03/07 15:38:35 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARDONFORM_HPP
#define PARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        const std::string   target;
    public:
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(PresidentialPardonForm& other);
        void    execute(const Bureaucrat& executor) const; 
        ~PresidentialPardonForm();
};
#endif