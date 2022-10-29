/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:21:45 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 13:01:47 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    Base *ptr = generate();

    std::cout << "BY REFERENCE" << std::endl;
    identify(*ptr);
    std::cout << "BY POINTER" << std::endl;
    identify(ptr);
    delete ptr;
    return (0);
;}