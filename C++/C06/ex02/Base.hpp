/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:26:05 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 13:01:31 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
private:
    
    std::string _type;

public:

    Base(void);
    Base(const Base& base);
    Base& operator=(const Base& base);
    virtual ~Base(void);
};

Base * generate(void);

void identify(Base* p);
void identify(Base& p);

#endif