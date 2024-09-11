/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:19:03 by fsantama          #+#    #+#             */
/*   Updated: 2024/09/11 14:19:05 by fsantama         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria* materiaTemplates[4];
public:
    MateriaSource();
    MateriaSource(MateriaSource const & other);
    virtual ~MateriaSource();
    MateriaSource &operator=(MateriaSource const & other);
    virtual void learnMateria(AMateria* m);
    virtual AMateria* createMateria(std::string const & type);
};

#endif
