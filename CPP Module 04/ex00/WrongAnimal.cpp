/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:09:04 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/12 08:32:28 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("") {
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    type = other.type;
    std::cout << "WrongAnimal copied" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "WrongAnimal assigned" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "Some generic wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}

