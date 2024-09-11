/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:26:07 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 10:37:31 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include "ScavTrap.hpp"

int main() {
    ScavTrap st("Serena");

    st.attack("enemy");
    st.guardGate();
    st.takeDamage(10);
    st.beRepaired(20);

    return 0;
}

