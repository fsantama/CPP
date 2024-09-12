/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:07:30 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/12 08:34:44 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    _type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof woof" << std::endl;
}
