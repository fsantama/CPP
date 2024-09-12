/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:15:08 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/12 10:20:28 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AMateria.hpp"

AMateria::AMateria(void): _type("Unnamed")
{
	std::cout << "AMateria " << this->_type << " created.\n";
}

AMateria::AMateria(std::string const & type): _type(type)
{
    std::cout << "AMateria " << this->_type << " created.\n";
}
AMateria::~AMateria(void)
{
	std::cout << "AMateria " << this->_type << " destroyed.\n";
}

AMateria::AMateria(AMateria const &other): _type(other._type)
{
    std::cout << "AMateria " << this->_type << " copied.\n";
}

std::string const & AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target) {
    (void)target; // avoid unused parameter warning
}
