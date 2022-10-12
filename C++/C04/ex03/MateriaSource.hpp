/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:03:02 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/12 20:03:03 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materias[4];

public:
    MateriaSource(void);
    MateriaSource(const MateriaSource& aMateriaSource);
    MateriaSource& operator=(const MateriaSource& AMateriaSource);
    ~MateriaSource(void);

    void learnMateria(AMateria *m);
    AMateria* createMateria(std::string const &type);
};

#endif