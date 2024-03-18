/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:34:58 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 11:34:58 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
    protected:
        std::string _name;
        unsigned int _hitPts;
        unsigned int _energyPts;
        unsigned int _attackDamage;
    public:
        ClapTrap(const std::string& _name);
        ClapTrap&   operator=(const ClapTrap& copy);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amout);

};
#endif