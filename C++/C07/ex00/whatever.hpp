/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:45:27 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/30 01:44:42 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T* a, T* b)
{
    T temp = *b;
    *b = *a;
    *a = temp;
}

template <typename T>
T min(T a, T b)
{
    return b <= a ? b : a;
}

template <typename T>
T max(T a, T b)
{
    return b >= a ? b : a;
}

#endif
