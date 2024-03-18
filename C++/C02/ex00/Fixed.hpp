/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:50:11 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/12 14:50:11 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

//OCF does not allow private but im doing as the subject says
class Fixed {
    private:
        int value;
        static const int    bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed&  operator=(const Fixed &other);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif