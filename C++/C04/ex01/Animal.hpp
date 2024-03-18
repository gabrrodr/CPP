/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:36:29 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/28 13:36:29 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class   Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string name);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual void    makeSound() const;
        virtual ~Animal();
        std::string getType() const;
};


#endif