/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:25:49 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 03:21:27 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
    uintptr_t serie;
    Data *user = new Data("isolinis", 456);
    Data *copy_user;

    serie = serialize(user);
    
    std::cout << "Serie: " << std::endl;
    std::cout << serie << std::endl;

    copy_user = deserialize(serie);

    std::cout << "USER: " << std::endl;
    std::cout << user << std::endl;
    std::cout << *user << std::endl;

    std::cout << "Copy USER: " << std::endl;
    std::cout << copy_user << std::endl;
    std::cout << *copy_user << std::endl;
    
    delete user;
    return (0);
;}