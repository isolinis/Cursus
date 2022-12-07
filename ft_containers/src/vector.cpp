/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:21:20 by jsolinis          #+#    #+#             */
/*   Updated: 2022/12/05 22:21:20 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.hpp"

template <class T, class Alloc>
ft::vector<T, Alloc>::vector(const allocator_type& alloc) : _alloc(alloc), _size(0), _capacity(0)
{
    this->_data = this->_alloc.allocate(this->_capacity);
}

template <class T, class Alloc>
ft::vector<T, Alloc>::vector(size_type n, const value_type& val, const allocator_type& alloc) : _alloc(alloc), _size(n), _capacity(n)
{
    this->_data = this->_alloc.allocate(this->_capacity);
    for (size_t i = 0; i < this->_size; i++)
    {
        this->_alloc.construct(&this->_data[i], val);
    }
}

template <class T, class Alloc>
template <class InputIterator>
ft::vector<T, Alloc>::vector(InputIterator first, InputIterator last, const Alloc& alloc) : _alloc(alloc), _size(0), _capacity(0)
{
    InputIterator it = first;
    while (++it != last)
    {
        _size++;
    }
    _capacity = _size;
    this->_data = this->_alloc.allocate(this->_capacity);
    for (size_t i = 0; ++first != last; i++)
    {
        this->_alloc.construct(&this->_data[i], *first);
    }
}

template <class T, class Alloc>
ft::vector<T, Alloc>::~vector(void)
{
    this->_alloc.deallocate(this->_data, this->_capacity);
}

int main(void)
{
    size_t n = 2;
    ft::vector<int> test;
    ft::vector<int> test1 = ft::vector<int>(n, 4);

    return (0);
}