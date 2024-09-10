/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:00:25 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/04 13:00:25 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor que recibe un nombre
Zombie::Zombie(std::string zombieName) : name(zombieName) {}

// Destructor que imprime un mensaje de despedida
Zombie::~Zombie() {
    std::cout << name << " is destroyed!" << std::endl;
}

// Método que hace que el zombie se anuncie
void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
