/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:16:21 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 12:16:23 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Point.hpp"

Point::Point() : x(0), y(0) {
}

Point::Point(float x, float y) : x(Fixed(x)), y(Fixed(y)) {
}

Point::Point(Point const &src) : x(src.x), y(src.y) {
}

Point &Point::operator=(Point const &rhs) {
    if (this != &rhs) {
        // No need to copy x and y as they are const
    }
    return *this;
}

Point::~Point() {
}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
