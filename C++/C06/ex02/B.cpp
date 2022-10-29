/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:42:47 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 12:44:25 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void)
{
    std::cout << "Default B constructor" << std::endl;
}

B::B(const B& b)
{
    *this = b;
}

B& B::operator=(const B& b)
{
    if (this != &b)
    {
        return *this;
    }
    return *this;
}

B::~B(void)
{
}