/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:14:53 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/05 09:14:53 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Crea una horda de zombies de tamaño N
Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) {
        return NULL;
    }

    // Crear un arreglo de Zombies en la memoria dinámica (heap)
    Zombie* horde = new Zombie[N];

    // Inicializar cada Zombie con el nombre dado
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);  // Usamos el método setName para asignar el nombre
    }

    // Devolver un puntero al primer zombie de la horda
    return horde;
}
