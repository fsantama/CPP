/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:16:00 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 12:16:02 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point(float x, float y);
    Point(Point const &src);
    Point &operator=(Point const &rhs);
    ~Point();

    Fixed getX() const;
    Fixed getY() const;
};

#endif
