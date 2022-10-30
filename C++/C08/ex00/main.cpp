/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:33:34 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/30 20:30:04 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

int main(void)
{
    std::vector<int> v{1, 2, 3, 4};
    int n1 = 4;
    int n2 = 40;
    size_t position;

    position = easyFind(v, n1);
    if (position == v.size())
        std::cout << n1 << " not found!" << std::endl;
    else
        std::cout << n1 << " found at position " << position << std::endl;
    
    position = easyFind(v, n2);
    if (position == v.size())
        std::cout << n2 << " not found!" << std::endl;
    else
        std::cout << n2 << " found at position " << position << std::endl;
    
    return (0);
}