/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:38:50 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/28 13:38:50 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class   WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string name);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        virtual void    makeSound() const;
        virtual ~WrongAnimal();
        std::string getType() const;
};


#endif