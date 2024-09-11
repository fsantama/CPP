/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:48:36 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 10:48:44 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
public:
    // Constructors
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();

    // Special member function
    void highFivesGuys(void);

private:
    static const unsigned int defaultHitPoints = 100;
    static const unsigned int defaultEnergyPoints = 100;
    static const unsigned int defaultAttackDamage = 30;
};

#endif
