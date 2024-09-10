/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:17:55 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 12:17:57 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include "Point.hpp"

int main() {
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(0.0f, 5.0f);
    Point p1(1.0f, 1.0f);
    Point p2(6.0f, 6.0f);

    std::cout << "Point p1 is " << (bsp(a, b, c, p1) ? "inside" : "outside") << " the triangle." << std::endl;
    std::cout << "Point p2 is " << (bsp(a, b, c, p2) ? "inside" : "outside") << " the triangle." << std::endl;

    return 0;
}
