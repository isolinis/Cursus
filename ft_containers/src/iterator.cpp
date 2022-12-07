/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:30:43 by jsolinis          #+#    #+#             */
/*   Updated: 2022/12/07 21:30:43 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iterator.hpp"

template <class T>
ft::iterator<T>::iterator(pointer ptr) : _data(ptr) {}

template <class T>
ft::iterator<T>::iterator(iterator const &other) : _data(other._data) {}

template <class T>
ft::iterator<T>& ft::iterator<T>::operator=(iterator const &right)
{
    if (this != &right)
    {
        this->_data = right._data;
    }
    return *this;
}

template <class T>
ft::iterator<T>::~iterator(void) {}

template <class T>
bool ft::iterator<T>::operator==(iterator const &right) const
{
    return this->_data == right._data;
}

template <class T>
bool ft::iterator<T>::operator!=(iterator const &right) const
{
    return this->_data != right._data;
}

template <class T>
ft::iterator<T>::reference ft::iterator<T>::operator*(void) const
{
    return *this->_data;
}

template <class T>
ft::iterator<T>::pointer ft::iterator<T>::operator->(void) const
{
    return this->_data;
}

template <class T>
ft::iterator<T>& ft::iterator<T>::operator++(void)
{
    ++this->_data;
    return *this;
}

template <class T>
ft::iterator<T>& ft::iterator<T>::operator--(void)
{
    --this->_data;
    return *this;
}

template <class T>
ft::iterator<T>& ft::iterator<T>::operator++(int)
{
    iterator ret(*this);
    ++(*this);
    return ret;
}

template <class T>
ft::iterator<T>& ft::iterator<T>::operator--(int)
{
    iterator ret(*this);
    --(*this);
    return ret;
}