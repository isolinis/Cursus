/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:49:51 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/12 17:49:53 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("undefined")
{
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

Character::Character(std::string aName) : _name(aName)
{
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

Character::Character(const Character &aCharacter)
{
    this->_name = aCharacter._name;
    for (int i = 0; i < 4; i++)
    {
        this->materias[i] = aCharacter.materias[i] ? aCharacter.materias[i]->clone() : NULL;
    }
}

Character &Character::operator=(const Character &aCharacter)
{
    if (this != &aCharacter)
    {
        this->_name = aCharacter._name;
        for (int i = 0; i < 4; i++)
        {
            if (aCharacter.materias[i])
            {
                if (this->materias[i])
                {
                    delete (this->materias[i]);
                }
                this->materias[i] = aCharacter.materias[i]->clone();
            }
        }
    }
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    bool equipped = false;
    for (int i = 0; i < 4; i++)
    {
        if (!this->materias[i])
        {
            this->materias[i] = m;
            equipped = true;
            break;
        }
    }
    if (!equipped)
    {
        std::cout << "There is no space for a new materia." << std::endl;
    }
}

void Character::unequip(int idx)
{
        this->materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    this->materias[idx]->use(target);
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i])
        {
            delete (this->materias[i]);
        }
    }
}