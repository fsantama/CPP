/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:09:57 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/12 08:32:58 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    virtual ~WrongCat();
    
    void makeSound() const;
};

#endif

