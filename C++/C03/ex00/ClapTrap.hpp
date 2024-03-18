/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:19:05 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/21 14:19:05 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
    private:
        std::string name;
        unsigned int hitPts;
        unsigned int energyPts;
        unsigned int attackDamage;
    public:
        ClapTrap(const std::string& name);
        ClapTrap&   operator=(const ClapTrap& copy);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amout);

};
#endif