/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:25:06 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/22 12:25:06 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap {
    public:
        FragTrap(const std::string& name);
        void    highFivesGuys(void);
        ~FragTrap();
};

#endif