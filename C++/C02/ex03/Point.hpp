/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:36:18 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/21 12:36:18 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        Fixed   x;
        Fixed   y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &src);
        ~Point();

        Point& operator=( const Point &rhs);
        Fixed   getX() const;
        Fixed   getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const p);
#endif