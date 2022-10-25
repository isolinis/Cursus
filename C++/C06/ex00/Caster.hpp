/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:15:11 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/25 08:01:57 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

#include <iostream>
#include <ctype.h>

class Caster
{
private:
    
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

    bool checkParameterType(int paramCount, char **someParameters) const;
    bool checkParameterIsChar(std::string aParameter) const;
    bool checkParameterIsInt(std::string aParameter) const;
    bool checkParameterIsFloat(std::string aParameter) const;
    bool checkParameterIsDouble(std::string aParameter) const;
};

#endif