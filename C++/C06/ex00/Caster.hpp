/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:15:11 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 01:52:53 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

class Caster
{
private:

    unsigned char _c;
    int _i;
    bool _outOfIntLimits;
    float _f;
    bool _outOfFloatLimits;
    double _d;
    bool _outOfDoubleLimits;
    bool _isPseudo;
    std::string _input;
    
    class NumberOfArgumentsException : public std::exception
    {
        virtual const char* what() const throw();
    };
    class NotValidScalarTypeException : public std::exception
    {
        virtual const char* what() const throw();
    };

public:

    Caster(void);
    Caster(const Caster& caster);
    Caster& operator=(const Caster& caster);
    ~Caster(void);

    char getChar(void) const;
    int getInt(void) const;
    float getFloat(void) const;
    double getDouble(void) const;
    bool getIsPseudo(void) const;
    std::string getInput(void) const;
    bool getOutOfIntLimits(void) const;
    bool getOutOfFloatLimits(void) const;
    bool getOutOfDoubleLimits(void) const;

    std::string checkParameterType(int paramCount, std::string input) const;
    
    std::string checkParameterIsChar(std::string aParameter) const;
    std::string checkParameterIsInt(std::string aParameter) const;
    std::string checkParameterIsFloat(std::string aParameter) const;
    std::string checkParameterIsDouble(std::string aParameter) const;

    void convertParameterToType(std::string aParameter, std::string type);

    void convertTypeChar(std::string aParameter);
    void convertTypeInt(std::string aParameter);
    void convertTypeFloat(std::string aParameter);
    void convertTypeDouble(std::string aParameter);
    void convertTypePseudo(std::string aParameter);
};

std::ostream& operator<<(std::ostream& os, const Caster& caster);

typedef struct s_cast
{
    std::string type;
    void (Caster::*fptr)(std::string aParameter);
} t_cast;

#endif