/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:13:38 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/24 08:01:10 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc != 2)
        {
            Caster::NumberOfArgumentsException wrongArgsNo;
            throw wrongArgsNo;
        }
        else
        {
            Caster caster;

            caster.checkParameterType(argv[1]);
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0)
;}