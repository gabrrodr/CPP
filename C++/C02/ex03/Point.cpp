/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:44:12 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/21 12:44:12 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &src) : x(src.x), y(src.y) {}

Point::~Point() {}

Fixed Point::getX() const {
    return this->x;
}

Fixed Point::getY() const {
    return this->y;
}

Point& Point::operator=(const Point &rhs) {
    if (this != &rhs) {
        (Fixed) this->x = rhs.getX();
        (Fixed) this->y = rhs.getY();
    }
    return *this;
}