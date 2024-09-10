/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 08:49:53 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/05 08:49:53 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie();                      // Constructor por defecto
    Zombie(std::string name);       // Constructor con nombre
    ~Zombie();                     // Destructor

    void announce() const;          // Método para que el zombie se anuncie
    void setName(std::string name); // Método para establecer el nombre
};

#endif
