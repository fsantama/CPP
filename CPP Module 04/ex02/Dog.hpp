/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:47:01 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 12:58:59 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain* brain;
public:
    Dog();
    Dog(const Dog &other);
    virtual ~Dog();
    Dog &operator=(const Dog &other);

    void makeSound() const;
};

#endif
