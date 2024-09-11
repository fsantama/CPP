/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:48:56 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 10:48:58 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->hitPoints = defaultHitPoints;
    this->energyPoints = defaultEnergyPoints;
    this->attackDamage = defaultAttackDamage;
    std::cout << "FragTrap " << this->name << " created with hit points " << this->hitPoints << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "FragTrap " << this->name << " copied" << std::endl;
}

// Assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "FragTrap " << this->name << " assigned" << std::endl;
    return *this;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " destroyed" << std::endl;
}

// Special member function
void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
}
