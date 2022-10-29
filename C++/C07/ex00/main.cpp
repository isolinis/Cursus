/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:44:49 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/30 01:44:43 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main (void) {
    int a, b;
    char y, z;
    std::string str1, str2;

    a = 2;
    b = 6;

    std::cout << "============================TEST INTEGERS=======================" << std::endl;

    std::cout << "Variable a es " << a << std::endl;
    std::cout << "Variable b es " << b << std::endl;
    std::cout << "El valor máximo de los dos es " << ::max(a, b) << std::endl;
    std::cout << "El valor mínimo de los dos es " << ::min(a, b) << std::endl;
    std::cout << "El valor de a: " << a << " y el valor de b: " << b << std::endl;
    ::swap(&a, &b);
    std::cout << "El valor de a: " << a << " y el valor de b: " << b << std::endl;

    std::cout << "============================TEST CHARS=======================" << std::endl;

    z = 'z';
    y = 'y';

    std::cout << "Variable z es " << z << std::endl;
    std::cout << "Variable y es " << y << std::endl;
    std::cout << "El valor máximo de los dos es " << ::max(z, y) << std::endl;
    std::cout << "El valor mínimo de los dos es " << ::min(z, y) << std::endl;
    std::cout << "El valor de z: " << z << " y el valor de y: " << y << std::endl;
    ::swap(&z, &y);
    std::cout << "El valor de z: " << z << " y el valor de y: " << y << std::endl;

    std::cout << "============================TEST STRINGS=======================" << std::endl;

    str1 = "papa1";
    str2 = "papa2";

    std::cout << "Variable str1 es " << str1 << std::endl;
    std::cout << "Variable str2 es " << str2 << std::endl;
    std::cout << "El valor máximo de los dos es " << ::max(str1, str2) << std::endl;
    std::cout << "El valor mínimo de los dos es " << ::min(str1, str2) << std::endl;
    std::cout << "El valor de str1: " << str1 << " y el valor de str2: " << str2 << std::endl;
    ::swap(&str1, &str2);
    std::cout << "El valor de str1: " << str1 << " y el valor de str2: " << str2 << std::endl;
    
    return (0);
}
