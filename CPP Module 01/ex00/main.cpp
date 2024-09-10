/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:33:00 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/04 14:33:00 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Prototipos de funciones
Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    // Crea un Zombie en el heap
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    
    // Libera la memoria del Zombie en el heap
    delete heapZombie;  // Llamamos al destructor manualmente

    // Crea un Zombie en el stack
    randomChump("StackZombie");

    return 0;
}
