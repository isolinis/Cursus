/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:42:29 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 12:44:34 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void)
{
    std::cout << "Default C constructor" << std::endl;
}

C::C(const C& c)
{
    *this = c;
}

C& C::operator=(const C& c)
{
    if (this != &c)
    {
        return *this;
    }
    return *this;
}

C::~C(void)
{
}