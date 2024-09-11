/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:46:45 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 12:46:51 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copied." << std::endl;
    *this = other; // Deep copy
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destroyed." << std::endl;
}
