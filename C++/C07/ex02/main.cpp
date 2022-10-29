/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:37:08 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/30 01:20:53 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

int main(void)
{
    try
    {
        Array<int> emptyArr = Array<int>();
        Array<int> arr = Array<int>(5);
        emptyArr.print();
        arr.print();
        arr[0] = 15;
        arr[1] = 33;
        arr[2] = 42;
        arr.print();
        std::cout << arr[2] << std::endl;
        std::cout << arr[20] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
