/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:15:11 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/23 23:39:37 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

#include <iostream>
#include <ctype.h>

class Caster
{
private:

    const std::string _parameter;
    Caster(void);

public:
    
    Caster(const std::string aParameter);
    Caster(const Caster& caster);
    Caster& operator=(const Caster& caster);
    ~Caster(void);

    const std::string getParameter(void) const;
    bool checkParameterIsChar(void) const;
    bool checkParameterIsInt(void) const;
    bool checkParameterIsFloat(void) const;
    bool checkParameterIsDouble(void) const;
};

#endif