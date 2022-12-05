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

namespace ft    // TODO: pending to check how to create a separate .hpp for definition and declaration of member classes
{
    template <class T, class Alloc = std::allocator<T>>
    class vector
    {
    private:

        typedef T value_type;
        typedef Alloc allocator_type;

        typedef typename value_type& reference;
        typedef typename value_type const& const_reference;
        typedef typename value_type* pointer;
        typedef typename value_type const* const_pointer;

        typedef ft::iterator iterator;
        typedef ft::const_iterator const_iterator;
        typedef ft::reverse_iterator reverse_iterator;
        typedef ft::const_reverse_iterator const_reverse_iterator;

        typedef typename ptrdiff_t difference_type; // TODO: a signed integral type, identical to iterator_traits<iterator>::difference_type (usually same a ptrdiff_t) ????
        typedef typename size_t size_type; // TODO: an unsigned integral type that can represent any non-negative value of difference_type (usually the same as size_t) ????

    public:

        explicit vector(const allocator_type& alloc = allocator_type()); // TODO: constructs an empty container, with no elements
        explicit vector(size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type()); // TODO: Constructs a container with n elements. Each element is a copy of val
        template<class InputIterator> vector(InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type()); // TODO: Constructs a container with as many elements as the range [first,last), with each element constructed from its corresponding element in that range, in the same order
        vector (const vector& other); // TODO: Constructs a container with a copy of each of the elements in x, in the same order
        ~vector(void);
        vector& operator=(vector& const right);
    };

}

#endif