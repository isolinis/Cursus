/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:20:54 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/30 20:29:35 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
std::size_t easyFind(T container, int valueToFind)
{
    typename T::iterator it = std::find(begin(container), end(container), valueToFind);
    std::size_t index = std::distance(std::begin(container), it);
    return (index);
}
#endif