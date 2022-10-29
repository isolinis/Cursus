/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:15:15 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 02:20:24 by jsolinis         ###   ########.fr       */
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

Caster::Caster(void) : _c(0), _i(0), _outOfIntLimits(false), _f(0.0f), _outOfFloatLimits(false),
_d(0.0), _outOfDoubleLimits(false), _isPseudo(false), _input("")
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

char Caster::getChar(void) const
{
    return this->_c;
}
int Caster::getInt(void) const
{
    return this->_i;
}
float Caster::getFloat(void) const
{
    return this->_f;
}
double Caster::getDouble(void) const
{
    return this->_d;
}
bool Caster::getIsPseudo(void) const
{
    return this->_isPseudo;
}
std::string Caster::getInput(void) const
{
    return this->_input;
}
bool Caster::getOutOfIntLimits(void) const
{
    return this->_outOfIntLimits;
}
bool Caster::getOutOfFloatLimits(void) const
{
    return this->_outOfFloatLimits;
}
bool Caster::getOutOfDoubleLimits(void) const
{
    return this->_outOfDoubleLimits;
}

std::string Caster::checkParameterType(int paramCount, std::string input) const
{
    try
    {
        if (paramCount != 2)
        {
            NumberOfArgumentsException badArgs;
            throw badArgs;
        }
        else
        {
            std::string type;
            
            type = checkParameterIsChar(input);
            if (type == "undefined")
                type = checkParameterIsInt(input);
            if (type == "undefined")
                type = checkParameterIsFloat(input);
            if (type == "undefined")
                type = checkParameterIsDouble(input);
            if (type == "undefined")
            {
                if (input.compare("nan") == 0 || input.compare("+inf") == 0 || input.compare("-inf") == 0 || input.compare("nanf") == 0 || input.compare("+inff") == 0 || input.compare("-inff") == 0)
                    type = "pseudo";
            }
            if (type == "undefined")
            {
                NotValidScalarTypeException badType;
                throw badType;
            }
            return type;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        std::exit(EXIT_FAILURE);
    }
}

std::string Caster::checkParameterIsChar(std::string aParameter) const
{
    if (aParameter.length() > 2)
    {
        return "undefined";
    }
    if (aParameter.length() == 2 && *aParameter.begin() != '\\')
    {
        return "undefined";
    }
    for (std::string::iterator it = aParameter.begin(); it != aParameter.end(); ++it)
    {
        if (!isalpha(*it))
        {
            return "undefined";
        }
    }
    return "char";
}

std::string Caster::checkParameterIsInt(std::string aParameter) const
{
    std::string::iterator it = aParameter.begin();

    if (*it == '+' || *it == '-')
    {
        it++;
    }
    while (it != aParameter.end())
    {
        if (!isdigit(*it))
        {
            return "undefined";
        }
        it++;
    }
    return "int";
}

std::string Caster::checkParameterIsFloat(std::string aParameter) const
{
    std::string::iterator it = aParameter.begin();
    int floating_point = 0;

    if (*it == '+' || *it == '-')
    {
        it++;
    }
    while (it != aParameter.end() - 1)
    {
        if (!isdigit(*it) && *it != '.')
        {
            if (*it != 'f')
            {
                return "undefined";
            }
        }
        if (*it == '.')
        {
            if (floating_point >= 1)
            {
                return "undefined";
            }
            floating_point++;
        }
        it++;
    }
    if (*it != 'f')
    {
        return "undefined";
    }
    return "float";
}

std::string Caster::checkParameterIsDouble(std::string aParameter) const
{
    std::string::iterator it = aParameter.begin();
    int floating_point = 0;

    if (*it == '+' || *it == '-')
    {
        it++;
    }
    while (it != aParameter.end())
    {
        if (!isdigit(*it) && *it != '.')
        {
            if (*it != 'f')
            {
                return "undefined";
            }
        }
        if (*it == '.')
        {
            if (floating_point >= 1)
            {
                return "undefined";
            }
            floating_point++;
        }
        it++;
    }
    return "double";
}

void Caster::convertParameterToType(std::string aParameter, std::string type)
{
    try
    {
        if (type == "undefined")
        {
            NotValidScalarTypeException badType;
            throw badType;
        }
        else
        {
            t_cast cast[5];

            cast[0].type = "char";
            cast[0].fptr = &Caster::convertTypeChar;
            cast[1].type = "int";
            cast[1].fptr = &Caster::convertTypeInt;
            cast[2].type = "float";
            cast[2].fptr = &Caster::convertTypeFloat;
            cast[3].type = "double";
            cast[3].fptr = &Caster::convertTypeDouble;
            cast[4].type = "pseudo";
            cast[4].fptr = &Caster::convertTypePseudo;
            for (int i = 0; i < 5; i++)
            {
                void (Caster::*do_convert)(std::string aParameter) = cast[i].fptr;
                if (type.compare(cast[i].type) == 0)
                {
                    (this->*do_convert)(aParameter);
                }
            }
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Caster::convertTypeChar(std::string aParameter)
{
    std::stringstream ss;

    ss << aParameter;
    ss >> this->_c;
    this->_i = static_cast<int>(this->getChar());
    this->_f = static_cast<float>(this->getChar());
    this->_d = static_cast<double>(this->getChar());
}

void Caster::convertTypeInt(std::string aParameter)
{
    std::stringstream ss;

    ss << aParameter;
    ss >> this->_i;
    if (this->_i > std::numeric_limits<int>::max() || this->_i < std::numeric_limits<int>::min())
        this->_outOfIntLimits = true;
    this->_c = !isprint(static_cast<char>(this->getInt()))
                   ? '0'
                   : static_cast<char>(this->getInt());
    this->_f = static_cast<float>(this->getInt());
    if (this->_f > std::numeric_limits<float>::max() || this->_f < std::numeric_limits<float>::min())
        this->_outOfFloatLimits = true;
    this->_d = static_cast<double>(this->getInt());
    if (this->_d > std::numeric_limits<double>::max() || this->_d < std::numeric_limits<double>::min())
        this->_outOfDoubleLimits = true;
}

void Caster::convertTypeFloat(std::string aParameter)
{
    std::stringstream ss;

    ss << aParameter;
    ss >> this->_f;
    if (this->_f > std::numeric_limits<float>::max() || this->_f < std::numeric_limits<float>::min())
        this->_outOfFloatLimits = true;
    this->_c = !isprint(static_cast<char>(this->getFloat()))
                   ? '0'
                   : static_cast<char>(this->getFloat());
    this->_i = static_cast<int>(this->getFloat());
    if (this->_i > std::numeric_limits<int>::max() || this->_i <= std::numeric_limits<int>::min())
        this->_outOfIntLimits = true;
    this->_d = static_cast<double>(this->getFloat());
    if (this->_d > std::numeric_limits<double>::max() || this->_d < std::numeric_limits<double>::min())
        this->_outOfDoubleLimits = true;
}

void Caster::convertTypeDouble(std::string aParameter)
{
    std::stringstream ss;

    ss << aParameter;
    ss >> this->_d;
    if (this->_d > std::numeric_limits<double>::max() || this->_d < std::numeric_limits<double>::min())
        this->_outOfDoubleLimits = true;
    this->_c = !isprint(static_cast<char>(this->getDouble()))
                   ? '0'
                   : static_cast<char>(this->getDouble());
    this->_i = static_cast<int>(this->getDouble());
    if (this->_i > std::numeric_limits<int>::max() || this->_i <= std::numeric_limits<int>::min())
        this->_outOfIntLimits = true;
    this->_f = static_cast<float>(this->getDouble());
    if (this->_f > std::numeric_limits<float>::max() || this->_f <= std::numeric_limits<float>::min())
        this->_outOfFloatLimits = true;
}

void Caster::convertTypePseudo(std::string aParameter)
{
    this->_input = aParameter;
    this->_isPseudo = true;
}

std::ostream &operator<<(std::ostream &os, const Caster &caster)
{ 
    if (!caster.getIsPseudo())
    {
        caster.getChar() == '0'
            ? os << "char: "
                 << "Non displayable"
            : os << "char: " << caster.getChar();
        os << std::endl;
        os << "int: ";
        caster.getOutOfIntLimits()
            ? os << "impossible"
            : os << caster.getInt();
        os << std::endl;
        os << "float: " << std::fixed << std::setprecision(1);
        caster.getOutOfFloatLimits()
            ? os << "impossible"
            : os << caster.getFloat() << "f";
        os << std::endl;
        os << "double: ";
        caster.getOutOfDoubleLimits()
            ? os << "impossible"
            : os << caster.getDouble();
        return (os);
    }
    os << "char: impossible" << std::endl;
    os << "int: impossible" << std::endl;
    os << "float: " << caster.getInput();
    caster.getInput().length() == 4
        ? os << ""
        : os << "f";
    os << std::endl;
    os << "double: ";
    caster.getInput().length() == 4
        ? os << caster.getInput().erase(caster.getInput().length() - 1)
        : os << caster.getInput();
    return (os);
}