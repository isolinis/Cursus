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

namespace ft
{
    template <class T, class Alloc = std::allocator<T>>
    class vector
    {
    private:

        typedef T value_type;
        typedef Alloc allocator_type;

        typedef T& reference;
        typedef const T& const_reference;
        typedef T* pointer;
        typedef const T* const_pointer;

        typedef ft::iterator iterator;
        // typedef ft::const_iterator const_iterator;
        // typedef ft::reverse_iterator reverse_iterator;
        // typedef ft::const_reverse_iterator const_reverse_iterator;

        typedef ptrdiff_t difference_type;
        typedef size_t size_type;

        Alloc _alloc;
        pointer _data;
        size_type _size;
        size_type _capacity;

    public:

        explicit vector(const Alloc& alloc = allocator_type());
        explicit vector(size_type n, const value_type& val = value_type(), const Alloc& alloc = allocator_type());
        template<class InputIterator> vector(InputIterator first, InputIterator last, const Alloc& alloc = allocator_type()); // TODO: Constructs a container with as many elements as the range [first,last), with each element constructed from its corresponding element in that range, in the same order
        vector (const vector& other); // TODO: Constructs a container with a copy of each of the elements in other, in the same order
        ~vector(void);
        vector& operator=(const vector& right);
    };

}

#endif