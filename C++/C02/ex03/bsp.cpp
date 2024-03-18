/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrrodr <gabrrodr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:59:06 by gabrrodr          #+#    #+#             */
/*   Updated: 2024/02/21 12:59:06 by gabrrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed    abs(Fixed x) {
    if (x < 0)
        return x * -1;
    return x;
}

static Fixed    area(Point const a, Point const b, Point const c) {
    return (((a.getX() * (b.getY() - c.getY())) +
            (b.getX() * (c.getY() - a.getY())) +
            (c.getX() * (a.getY() - b.getY()))) / 2);
}

bool    bsp(Point const a, Point const b, Point const c, Point const p) {
    Fixed   abc = abs(area(a, b, c));
    Fixed   pab = abs(area(p, a, b));
    Fixed   pbc = abs(area(p, b, c));
    Fixed   pca = abs(area(p, c, a));

    return abc == pab + pbc + pca;
}