/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:03:08 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/12 20:03:10 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &aMateriaSource)
{
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = aMateriaSource.materias[i] ? aMateriaSource.materias[i]->clone() : NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &aMateriaSource)
{
    if (this != &aMateriaSource)
    {
        for (int i = 0; i < 4; i++)
        {
            if (aMateriaSource.materias[i])
            {
                if (this->materias[i])
                {
                    delete (this->materias[i]);
                }
                this->materias[i] = aMateriaSource.materias[i]->clone();
            }
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    bool learned = false;
    for (int i = 0; i < 4; i++)
    {
        if (!this->materias[i])
        {
            this->materias[i] = m;
            learned = true;
            break;
        }
    }
    if (!learned)
    {
        std::cout << "There is no space for a new materia." << std::endl;
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    AMateria *m;
    if (type == "ice")
    {
        m = new Ice();
    }
    else
    {
        m = new Cure();
    }
    return (m);
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i])
        {
            delete (this->materias[i]);
        }
    }
}
