/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:15:15 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/25 08:09:44 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

const char *Caster::NumberOfArgumentsException::what() const throw()
{
    return "Incorrect number of arguments. Try: 'convert <argument>'.";
}

const char *Caster::NotValidScalarTypeException::what() const throw()
{
    return "Argument is not a valid scalar type.";
}

Caster::Caster(void)
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
        return *this;
    }
    return *this;
}

Caster::~Caster(void)
{
}

bool Caster::checkParameterType(int paramCount, char **someParameters) const
{
    try
    {
        if (paramCount != 2)
        {
            NumberOfArgumentsException badArgs;
            throw badArgs;
        }
        else if (this->checkParameterIsChar(someParameters[1]))
        {
            std::cout << "Char: " << someParameters[1] << std::endl;
            return true;
        }
        else if (this->checkParameterIsInt(someParameters[1]))
        {
            std::cout << "Int: " << someParameters[1] << std::endl;
            return true;
        }
        else if (this->checkParameterIsFloat(someParameters[1]))
        {
            std::cout << "Float: " << someParameters[1] << std::endl;
            return true;
        }
        else if (this->checkParameterIsDouble(someParameters[1]))
        {
            std::cout << "Double: " << someParameters[1] << std::endl;
            return true;
        }
        else
        {
            NotValidScalarTypeException badType;
            throw badType;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return false;
    }
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
        if (aParameter.at(i) == '.')
        {
            if (floating_point >= 1)
            {
                return false;
            }
            floating_point++;
        }
        i++;
    }
    return true;
}

bool Caster::checkParameterIsDouble(std::string aParameter) const
{
    size_t i = 0;
    int floating_point = 0;
    if (aParameter.at(i) == '+' || aParameter.at(i) == '-')
    {
        i++;
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
        if (aParameter.at(i) == '.')
        {
            if (floating_point >= 1)
            {
                return false;
            }
            floating_point++;
        }
        i++;
    }
    return true;
}