/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:54:25 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/30 01:41:58 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T_arr>
void iter(T_arr* arr, size_t length, void (*func)(T_arr))
{
    for (size_t i = 0; i < length; i++)
    {
        func(arr[i]);
    }
}

template<typename T>
void display(T t)
{
    std::cout << "Element: " << t << std::endl;
}

template<typename T>
void addOne(T t)
{
    std::cout << t << " + 1 = " << t + 1 << std::endl;
}

template<>
void addOne(std::string str)
{
    std::cout << str << " + 1 = " << str << " and 1." << std::endl;
}

#endif
