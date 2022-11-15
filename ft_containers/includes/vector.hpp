/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:55:01 by jsolinis          #+#    #+#             */
/*   Updated: 2022/11/15 17:50:39 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>
#include <memory>
#include "ft.hpp"

using namespace ft;

template <class T, class Alloc = std::allocator<T>>
class Vector
{
private:

    T                   value_type;
    Alloc               allocator_type;
    std::size_t         size_type;
    std::ptrdiff_t      difference_type;
    value_type&         reference;
    const value_type&   const_reference;
    Allocator::pointer  pointer;
    
};

#endif