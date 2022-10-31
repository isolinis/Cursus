/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:08:21 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/31 12:47:45 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _max_size(0)
{
    std::cout << "Default Span constructor called." << std::endl;
}

Span::Span(const unsigned int &n)
{
    this->_max_size = n;
    this->_container.reserve(n);
    std::cout << "Parameterized Span constructor called." << std::endl;
}

Span::Span(const Span &span)
{
    *this = span;
    std::cout << "Copy Span constructor called." << std::endl;
}

Span &Span::operator=(const Span &span)
{
    if (this != &span)
    {
        this->_max_size = span._max_size;
        copy(span._container.begin(), span._container.end(), back_inserter(this->_container));
    }
    std::cout << "Assignation operator overload applied." << std::endl;
    return *this;
}

int &Span::operator[](const unsigned int &index)
{
    if (index < 0 || index >= size())
    {
        throw std::out_of_range("Element is out of the limits of the Span.");
    }
    return this->_container[index];
}

Span::~Span(void)
{
    this->_container.clear();
    std::cout << "Span destructor called." << std::endl;
}

unsigned int Span::size(void)
{
    return this->_max_size;
}

void Span::addNumber(const int &number)
{
    if (this->_container.size() == this->_max_size)
        throw std::runtime_error("Span object is full.");
    else
    {
        this->_container.push_back(number);
        std::cout << "Number " << number << " successfully added to Span" << std::endl;
    }
}

int generator(void)
{
    return (rand() % 10000 - 1);
}

void Span::addNumbersRange(void)
{
    std::vector<int> tmpContainer(this->_max_size);
    srand(time(NULL));
    std::generate(tmpContainer.begin(), tmpContainer.end(), generator);
    this->_container = tmpContainer;
}

void ft_abs(int &i)
{
    i = abs(i);
}

int Span::shortestSpan(void) const
{
    if (this->_container.size() <= 1)
        throw std::runtime_error("There are no sufficient elements for this operation.");
    std::vector<int> differences(this->_max_size);

    std::adjacent_difference(this->_container.begin(), this->_container.end(), differences.begin());
    std::for_each(differences.begin(), differences.end(), ft_abs);
    return (*(std::min_element(differences.begin() + 1, differences.end())));
}

int Span::longestSpan(void) const
{
    if (this->_container.size() <= 1)
        throw std::runtime_error("There are no sufficient elements for this operation.");
    std::vector<int> differences(this->_max_size);

    std::adjacent_difference(this->_container.begin(), this->_container.end(), differences.begin());
    std::for_each(differences.begin(), differences.end(), ft_abs);
    return (*(std::max_element(differences.begin() + 1, differences.end())));
}
