/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:49:48 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 09:49:48 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Definiciones de las funciones privadas

void Harl::debug(void) {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

// Definición de la función complain

void Harl::complain(std::string level) {
    // Crear un array de punteros a funciones miembro
    void (Harl::*complainFunctions[4])(void) = {
        &Harl::debug, &Harl::info, &Harl::warning, &Harl::error
    };
    
    // Crear un array con los niveles de quejas
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    // Comparar el nivel pasado como argumento y ejecutar la función correspondiente
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            (this->*complainFunctions[i])();
            return;
        }
    }
    std::cout << "Invalid complaint level: " << level << std::endl;
}
