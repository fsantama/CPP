/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:47:39 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 11:47:40 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
public:
    Fixed();                                // Constructor por defecto
    Fixed(const Fixed& other);              // Constructor de copia
    Fixed& operator=(const Fixed& other);   // Operador de asignación de copia
    ~Fixed();                               // Destructor

    int getRawBits() const;
    void setRawBits(int const raw);

private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;
};

#endif
