/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:59:27 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/31 15:06:04 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
    std::cout << "Default MutantStack constructor called." << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &ms)
{
    std::cout << "Copy MutantStack constructor called." << std::endl;
    *this = ms;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& ms)
{
    if (this != &ms)
    {
        this->c = ms.c;
    }
    return *this;
}


template <typename T>
MutantStack<T>::~MutantStack(void)
{
    std::cout << "MutantStack destructor called." << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(void)
{
    return this->c.cbegin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend(void)
{
    return this->c.cend();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
    return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin(void)
{
    return this->c.crbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend(void)
{
    return this->c.crend();
}