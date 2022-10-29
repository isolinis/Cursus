/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:37:41 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/30 01:39:35 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T *_arrPtr;
    unsigned int _size;

public:
    Array(void);
    Array(unsigned int n);
    Array(const Array &arr);
    Array<T> &operator=(const Array &arr);
    T &operator[](unsigned int index);
    ~Array(void);

    unsigned int size(void) const;
    void print(void);
};

template <typename T>
Array<T>::Array(void)
{
    this->_size = 0;
    this->_arrPtr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->_size = n;
    this->_arrPtr = new T[_size];
    for (unsigned int i = 0; i < n - 1; i++)
    {
        this->_arrPtr[i] = 0;
    }
}

template <typename T>
Array<T>::Array(const Array &arr)
{
    this->_arrPtr = new T[arr.size()];
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        this->_arrPtr[i] = arr._arrPtr[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &arr)
{
    if (this != &arr)
    {
        this->_arrPtr = new T[arr.size()];
        for (unsigned int i = 0; i < arr.size(); i++)
        {
            this->_arrPtr[i] = arr._arrPtr[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index < 0 || index >= size() - 1)
    {
        throw std::out_of_range("Element is out of the limits of the Array.");
    }
    return this->_arrPtr[index]; 
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return (this->_size);
}

template <typename T>
Array<T>::~Array(void)
{
    delete[] this->_arrPtr;
}

template <typename T>
void Array<T>::print(void)
{
    if (this->size() == 0)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        for (unsigned int i = 0; i < this->size() - 1; i++)
        {
            std::cout << "Position " << i << " contains " << this->_arrPtr[i] << "." << std::endl;
        }
    }
}

#endif
