/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 08:22:39 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/06 08:22:39 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string& newType) {
    type = newType;
}
