/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:39:13 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 12:44:11 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{
    std::cout << "Default A constructor" << std::endl;
}

A::A(const A& a)
{
    *this = a;
}

A& A::operator=(const A& a)
{
    if (this != &a)
    {
        return *this;
    }
    return *this;
}

A::~A(void)
{
}