/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:47:42 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 12:59:56 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " makes sound: ";
    dog->makeSound();

    std::cout << cat->getType() << " makes sound: ";
    cat->makeSound();

    delete dog;
    delete cat;

    // Crear un array de Animal* con mitad perros y mitad gatos
    Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    // Borrar todos los animales y asegurarse de que los destructores son llamados correctamente
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    return 0;
}

