/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:08:21 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/12 08:34:51 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    _type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow meow" << std::endl;
}
