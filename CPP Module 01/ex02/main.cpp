/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:11:37 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/05 10:11:37 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    // Paso 1: Declaración de la cadena
    std::string str = "HI THIS IS BRAIN";

    // Paso 2: Creación del puntero y la referencia
    std::string* stringPTR = &str; // Puntero a la cadena
    std::string& stringREF = str;  // Referencia a la cadena

    // Paso 3: Imprimir las direcciones de memoria
    std::cout << "Memory address of the string variable: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    // Paso 4: Imprimir los valores de la cadena
    std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
