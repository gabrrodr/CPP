/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:41:18 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/12 13:41:18 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_FILTER_HPP
# define HARL_FILTER_HPP

# include <iostream>
# include <string>

class Harl {
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
};

typedef void(Harl::*functions) (void);

#endif