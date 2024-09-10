/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 08:26:32 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/06 08:26:32 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(const std::string& name, Weapon& weapon);
    void attack() const;
};

#endif
