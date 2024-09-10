/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:20:51 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 12:20:54 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    // Constructors
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &other);

    // Destructor
    ~Fixed();

    // Assignment operator
    Fixed &operator=(const Fixed &other);

    // Getter and Setter
    int getRawBits(void) const;
    void setRawBits(int const raw);

    // Conversion functions
    float toFloat(void) const;
    int toInt(void) const;

    // Overloaded operators
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
    
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    Fixed &operator++();    // pre-increment
    Fixed operator++(int); // post-increment
    Fixed &operator--();    // pre-decrement
    Fixed operator--(int); // post-decrement

    // Static member functions
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

private:
    int value;
    static const int fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif // FIXED_HPP
