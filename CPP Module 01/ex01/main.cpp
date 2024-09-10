/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:32:47 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/05 09:32:47 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 3;  // Tamaño de la horda
    std::string name = "ZombieHorde";

    // Crear una horda de N zombies
    Zombie* horde = zombieHorde(N, name);

    if (horde) {
        // Hacer que cada zombie se anuncie
        for (int i = 0; i < N; ++i) {
            horde[i].announce();
        }

        // Liberar la memoria de la horda
        delete[] horde;
    }

    return 0;
}
