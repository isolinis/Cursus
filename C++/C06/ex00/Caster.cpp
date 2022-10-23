/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:15:15 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/23 23:39:27 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

Caster::Caster(void) : _parameter("undefined")
{
}

Caster::Caster(const std::string aParameter) : _parameter(aParameter)
{
}

Caster::Caster(const Caster &caster)
{
    *this = caster;
}

Caster &Caster::operator=(const Caster &caster)
{
    if (this != &caster)
    {
        Caster retCaster = Caster(caster.getParameter());
        return retCaster;
    }
    return *this;
}

Caster::~Caster(void)
{
}

const std::string Caster::getParameter(void) const
{
    return this->_parameter;
}

bool Caster::checkParameterIsChar() const
{
    if (this->getParameter().length() != 0)
    {
        return false;
    }
    for (int i = 0; i < this->getParameter().length(); i++)
    {
        if (!isalpha(this->getParameter().at(i)))
        {
            return false;
        }
    }
    return true;
}