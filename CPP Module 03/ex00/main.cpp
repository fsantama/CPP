/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:26:07 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/10 12:41:03 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("CT-1");

    claptrap.attack("target");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("target");

    return 0;
}
