/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:10:01 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 12:10:03 by fsantama         ###   ########.fr       */
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

    // Sobrecarga de operadores
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    Fixed& operator++();        // Pre-incremento
    Fixed operator++(int);      // Post-incremento
    Fixed& operator--();        // Pre-decremento
    Fixed operator--(int);      // Post-decremento

    // Funciones estáticas
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;
};

// Sobrecarga del operador de inserción <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
