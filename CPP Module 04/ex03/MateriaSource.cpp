/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:19:18 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 14:22:08 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i)
        materiaTemplates[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & other) {
    for (int i = 0; i < 4; ++i) {
        if (other.materiaTemplates[i])
            materiaTemplates[i] = other.materiaTemplates[i]->clone();
        else
            materiaTemplates[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i)
        delete materiaTemplates[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete materiaTemplates[i];
            if (other.materiaTemplates[i])
                materiaTemplates[i] = other.materiaTemplates[i]->clone();
            else
                materiaTemplates[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m)
        return;
    for (int i = 0; i < 4; ++i) {
        if (!materiaTemplates[i]) {
            materiaTemplates[i] = m->clone();
            return;
        }
    }
    delete m; // No space to learn new materia, discard it
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i) {
        if (materiaTemplates[i] && materiaTemplates[i]->getType() == type)
            return materiaTemplates[i]->clone();
    }
    return NULL;
}
