/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:10:24 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/05 09:10:24 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor por defecto
Zombie::Zombie() {}

// Constructor con nombre
Zombie::Zombie(std::string name) : name(name) {}

// Destructor
Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

// Método announce
void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Método para establecer el nombre
void Zombie::setName(std::string name) {
    this->name = name;
}
