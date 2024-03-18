/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:35:52 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 11:35:52 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(const std::string& name);
        void    highFivesGuys(void);
        ~FragTrap();
};

#endif