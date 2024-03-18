/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:34:07 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/21 12:34:07 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
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

        bool    operator>(const Fixed &value) const;
        bool    operator<(const Fixed &value) const;
        bool    operator>=(const Fixed &value) const;
        bool    operator<=(const Fixed &value) const;
        bool    operator==(const Fixed &value) const;
        bool    operator!=(const Fixed &value) const;

        Fixed   operator+(const Fixed &value) const;
        Fixed   operator-(const Fixed &value) const;
        Fixed   operator*(const Fixed &value) const;
        Fixed   operator/(const Fixed &value) const;

        Fixed&  operator++(void);
        Fixed   operator++(int);
        Fixed&  operator--(void);
        Fixed   operator--(int);

        static Fixed&  min(Fixed &a, Fixed &b);
        static const Fixed&  min(const Fixed &a, const Fixed &b);
        static Fixed&  max(Fixed &a, Fixed &b);
        static const Fixed&  max(const Fixed &a, const Fixed &b);

    private:
        static const int bits = 8;
        int value;
};

std::ostream& operator<<(std::ostream &out, Fixed const &value);

#endif