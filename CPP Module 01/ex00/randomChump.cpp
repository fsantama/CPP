/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ranromChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:29:52 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/04 14:29:52 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Crea un Zombie en el stack y lo hace anunciarse
void randomChump(std::string name) {
    Zombie stackZombie(name);  // Se crea en el stack
    stackZombie.announce();    // El zombie se anuncia
}
