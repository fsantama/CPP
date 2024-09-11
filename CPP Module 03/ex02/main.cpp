/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:26:07 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 11:00:05 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "FragTrap.hpp"

int main() {
    FragTrap fragTrap("Serena");

    fragTrap.attack("enemy");
    fragTrap.highFivesGuys();
    fragTrap.takeDamage(10); 
    fragTrap.beRepaired(20);
    {
        FragTrap fragTrap2("Luna");
        fragTrap2.attack("another enemy");
        fragTrap2.highFivesGuys();
    }

    return 0;
}
