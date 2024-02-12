/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:06:20 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/06 14:06:20 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string weaponType);
        ~Weapon();
        const std::string& getType();
        void    setType(std::string newType);
};

#endif