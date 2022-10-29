/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:13:38 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 01:01:30 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

int main(int argc, char **argv)
{
    Caster caster;
    std::string type;

    type = caster.checkParameterType(argc, argv[1]);
    caster.convertParameterToType(argv[1], type);
    std::cout << caster << std::endl;

    return (0);
;}