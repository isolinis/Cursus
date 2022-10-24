/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:15:11 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/24 08:01:24 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

#include <iostream>
#include <ctype.h>

class Caster
{
private:

    //const std::string _parameter;

public:
    
    class NumberOfArgumentsException : public std::exception
    {
        virtual const char* what() const throw();
    };
    Caster(void);
    //Caster(const std::string aParameter);
    Caster(const Caster& caster);
    Caster& operator=(const Caster& caster);
    ~Caster(void);

    //const std::string getParameter(void) const;
    bool checkParameterType(std::string aParameter) const;
    bool checkParameterIsChar(std::string aParameter) const;
    bool checkParameterIsInt(std::string aParameter) const;
    bool checkParameterIsFloat(std::string aParameter) const;
    bool checkParameterIsDouble(std::string aParameter) const;
};

#endif