/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:21:01 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 12:21:09 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Constructor from int
Fixed::Fixed(const int value) : value(value << fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

// Constructor from float
Fixed::Fixed(const float value) : value(roundf(value * (1 << fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) : value(other.value) {
    std::cout << "Copy constructor called" << std::endl;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Assignment operator
Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

// Getter
int Fixed::getRawBits(void) const {
    return value;
}

// Setter
void Fixed::setRawBits(int const raw) {
    value = raw;
}

// Convert to float
float Fixed::toFloat(void) const {
    return static_cast<float>(value) / (1 << fractionalBits);
}

// Convert to int
int Fixed::toInt(void) const {
    return value >> fractionalBits;
}

// Overload operators (implementations omitted for brevity)

// Static functions
Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

// Overload stream insertion operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
