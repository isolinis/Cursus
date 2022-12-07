/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 06:10:26 by jsolinis          #+#    #+#             */
/*   Updated: 2022/11/23 06:12:24 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include <iostream>

namespace ft
{
    template <class T>
    class iterator
    {
    private:

        using iterator_category = std::random_access_iterator_tag;
        using difference_type = ptrdiff_t;
        using value_type = T;
        using pointer = value_type*;
        using reference = value_type&;

        pointer _data;

    public:

        iterator(pointer ptr);
        iterator(iterator const &other);
        iterator& operator=(iterator const &right);
        ~iterator(void);

        bool operator==(iterator const &right) const;
        bool operator!=(iterator const &right) const;

        reference operator*(void) const;
        pointer operator->(void) const;

        // TODO: Can be dereferenced as an lvalue (if in a dereferenceable state). *a = t

        iterator& operator++(void);
        iterator& operator--(void);
        iterator& operator++(int);
        iterator& operator--(int);

        // TODO: revised what *a++ mean

    };

}

#endif