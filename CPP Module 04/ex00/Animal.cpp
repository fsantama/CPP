/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:06:34 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/12 08:34:25 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void): _type("Unnamed")
{
	std::cout << "Animal " << this->_type << " created.\n";
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal " << this->_type << " created.\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal " << this->_type << " destroyed.\n";
}

Animal::Animal(const Animal &copy): _type(copy._type)
{
	std::cout << "Animal " << this->_type << " copied.\n";
}

Animal& Animal::operator=(const Animal &equal)
{
	std::cout << "Copy assignment operator called.\n";
	this->_type = equal._type;
	return (*this);
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const {
    return _type;
}
