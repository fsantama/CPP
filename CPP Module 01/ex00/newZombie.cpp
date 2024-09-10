/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:29:24 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/04 14:29:24 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Crea un nuevo Zombie en el heap y lo devuelve
Zombie* newZombie(std::string name) {
    return new Zombie(name);  // Usamos 'new' para crear un Zombie en el heap
}
