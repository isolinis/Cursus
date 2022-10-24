/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:15:15 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/24 20:00:22 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

const char *Caster::NumberOfArgumentsException::what() const throw()
{
    return "Incorrect number of arguments. Try: 'convert <argument>'.";
}

Caster::Caster(void)
{
}

// Caster::Caster(const std::string aParameter) : _parameter(aParameter)
//{
// }

Caster::Caster(const Caster &caster)
{
    *this = caster;
}

Caster &Caster::operator=(const Caster &caster)
{
    if (this != &caster)
    {
        // Caster retCaster = Caster(caster.getParameter());
        return *this;
    }
    return *this;
}

Caster::~Caster(void)
{
}

// const std::string Caster::getParameter(void) const
//{
//     return this->_parameter;
// }

bool Caster::checkParameterType(std::string aParameter) const
{
    if (this->checkParameterIsChar(aParameter))
    {
        std::cout << "Char: " << aParameter << std::endl;
        return true;
    }
    else if (this->checkParameterIsInt(aParameter))
    {
        std::cout << "Int: " << aParameter << std::endl;
        return true;
    }
    std::cout << "Argument is not a valid scalar type." << std::endl;
    return false;
}

bool Caster::checkParameterIsChar(std::string aParameter) const
{
    if (aParameter.length() > 2)
    {
        return false;
    }
    if (aParameter.length() == 2 && aParameter.at(0) != '\\')
    {
        return false;
    }
    for (size_t i = 0; i < aParameter.length(); i++)
    {
        if (!isprint(aParameter.at(i)) || isalnum(aParameter.at(i)))
        {
            return false;
        }
    }
    return true;
}

bool Caster::checkParameterIsInt(std::string aParameter) const
{
    size_t i = 0;
    if (aParameter.at(i) == '+' || aParameter.at(i) == '-')
    {
        i++;
    }
    while (i < aParameter.length() - 1)
    {
        if (!isalnum(aParameter.at(i)))
        {
            return false;
        }
        i++;
    }
    return true;
}

bool Caster::checkParameterIsFloat(std::string aParameter) const
{
    size_t i = 0;
    int floating_point = 0;
    if (aParameter.at(i) == '+' || aParameter.at(i) == '-')
    {
        i++;
    }
    if (aParameter.at(aParameter.length() - 1) != 'f')
    {
        return false;
    }
    while (i < aParameter.length() - 1)
    {
        if (!isalnum(aParameter.at(i)) && aParameter.at(i) != '.')
        {
            return false;
        }
        if (floating_point > 1)
        {
            return false;
        }
        if (aParameter.at(i) == '.' && floating_point == 0)
        {
            floating_point++;
        }
        i++;
    }
    return true;
}

// bool Caster::checkParameterIsInt(std::string aParameter) const
// {
//     size_t i = 0;
//     if (aParameter.at(i) == '+' || aParameter.at(i) == '-')
//     {
//         i++;
//     }
//     while (i < aParameter.length() - 1)
//     {
//         if (!isalnum(aParameter.at(i)))
//         {
//             return false;
//         }
//         i++;
//     }
//     return true;
// }