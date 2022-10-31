/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:08:36 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/31 12:42:32 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

class Span
{
private:

    unsigned int _max_size;
    std::vector<int> _container;
    Span(void);

public:

    Span(const unsigned int& n);
    Span(const Span& span);
    Span& operator=(const Span& span);
    int& operator[](const unsigned int& index);
    ~Span(void);

    unsigned int size(void);

    void addNumber(const int& number);
    void addNumbersRange(void);
    int shortestSpan(void) const;
    int longestSpan(void) const;
};

#endif