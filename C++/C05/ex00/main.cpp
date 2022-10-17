/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:12:45 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/13 21:12:49 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "===================TRY-CATCH will enter the catch as grade is too low==============" << std::endl;
    try
    {
        Bureaucrat bureaucrat4("Siobhan", 10000);

        std::cout << bureaucrat4.getName() << std::endl;
        std::cout << bureaucrat4 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===================TRY-CATCH will not enter the catch block====================" << std::endl;
    try
    {
        Bureaucrat bureaucrat1("Tony", 150);
        Bureaucrat bureaucrat2("Malony", 35);
        Bureaucrat bureaucrat3;

        bureaucrat3 = bureaucrat1;
        bureaucrat1 = bureaucrat2;
        std::cout << bureaucrat1 << std::endl;
        for (int i = 0; i < 10; i++) {
            bureaucrat1.increment();
        }
        std::cout << bureaucrat1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}