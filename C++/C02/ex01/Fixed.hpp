/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:16:29 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/12 17:16:29 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>
# include <string>

class Fixed {
    private:
        static const int bits = 8;
        int value;
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed(const int x);
        Fixed(const float y);
        Fixed&  operator=(const Fixed &other);
        float   toFloat(void) const;
        int     toInt(void) const;
        int getRawBits(void) const;
        void    setRawBits(int const raw);
        ~Fixed();
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);


#endif