/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:02:30 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 12:02:32 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:
    Fixed();                                   // Constructor por defecto
    Fixed(const int value);                    // Constructor que toma un entero
    Fixed(const float value);                  // Constructor que toma un float
    Fixed(const Fixed& other);                 // Constructor de copia
    Fixed& operator=(const Fixed& other);      // Operador de asignación de copia
    ~Fixed();                                  // Destructor

    int getRawBits() const;
    void setRawBits(int const raw);

    float toFloat() const;
    int toInt() const;

private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;
};

// Sobrecarga del operador de inserción <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
