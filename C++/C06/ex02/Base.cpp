/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:23:55 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 13:02:07 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(void)
{
}

Base::Base(const Base &base)
{
    *this = base;
}

Base &Base::operator=(const Base &base)
{
    if (this != &base)
    {
        return *this;
    }
    return *this;
}

Base::~Base(void)
{
}

Base *generate(void)
{
    srand(time(NULL));
    int randNum = (rand() % 3);
    std::cout << "Selection at random corresponds to type ";
    if (randNum == 0)
    {
        std::cout << "A" << std::endl;
        return (new A());
    }
    if (randNum == 1)
    {
        std::cout << "B" << std::endl;
        return (new B());
    }
    if (randNum == 2)
    {
        std::cout << "C" << std::endl;
        return (new C());
    }
    return NULL;
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        if (&dynamic_cast<A &>(p))
            std::cout << "A" << std::endl;
    }
    catch(const std::bad_cast& bc)
    {
    }
    try
    {
        if (&dynamic_cast<B &>(p))
            std::cout << "B" << std::endl;
    }
    catch(const std::bad_cast& bc)
    {
    }
    try
    {
        if (&dynamic_cast<C &>(p))
            std::cout << "C" << std::endl;
    }
    catch(const std::bad_cast& bc)
    {
    }
}