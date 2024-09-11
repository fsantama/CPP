/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:47:42 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 13:49:30 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();  // Debería imprimir "Woof!"
    cat->makeSound();  // Debería imprimir "Meow!"
    
    delete dog;
    delete cat;

    return 0;
}
