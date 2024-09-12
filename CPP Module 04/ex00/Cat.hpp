/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:08:00 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/12 08:27:10 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:

    Cat();
    virtual ~Cat();
    virtual void makeSound() const;
};

#endif
