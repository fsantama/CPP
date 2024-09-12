/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:06:00 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/12 08:34:09 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
    std::string _type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &copy);
		Animal& operator=(const Animal &equal);
		virtual ~Animal();

		virtual void	makeSound(void) const;
		std::string		getType(void) const; 
};

#endif

