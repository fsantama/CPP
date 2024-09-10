/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:16:37 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 12:16:39 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Point.hpp"
#include "Fixed.hpp"

static Fixed area(Point const &a, Point const &b, Point const &c) {
    return (a.getX() * (b.getY() - c.getY()) +
            b.getX() * (c.getY() - a.getY()) +
            c.getX() * (a.getY() - b.getY())) / Fixed(2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed A = area(a, b, c);
    Fixed A1 = area(point, b, c);
    Fixed A2 = area(a, point, c);
    Fixed A3 = area(a, b, point);

    return (A == (A1 + A2 + A3));
}
