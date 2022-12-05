/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:55:01 by jsolinis          #+#    #+#             */
/*   Updated: 2022/11/23 06:12:18 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <memory>
#include "iterator.hpp"

namespace ft    //pending to check how to create a separate .hpp for definition and declaration of member classes
{
    template <class T, class A = std::allocator<T>>
    class Vector
    {
    private:
        typedef T value_type;
        typedef A allocator_type;
        typedef typename A::size_type size_type;
        typedef typename A::difference difference_type;

        typedef ft::iterator iterator;
        typedef ft::const_iterator const_iterator;
        typedef ft::reverse_iterator reverse_iterator;
        typedef ft::const_reverse_iterator const_reverse_iterator;

        typedef typename A::reference reference;
        typedef typename A::const_reference const_reference;
        typedef typename A::pointer pointer;
        typedef typename A::const_pointer const_pointer;
    };

}

#endif