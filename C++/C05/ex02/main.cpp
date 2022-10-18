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
        Form form1("Form1", 10000, 150);

        std::cout << form1.getName() << std::endl;
        std::cout << form1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "===================TRY-CATCH will not enter the catch block====================" << std::endl;
    try
    {
        Bureaucrat bureaucrat1("Malony", 35);
        Form form2("Form2", 34, 150);
        Form form3("Form3", 36, 150);

        form2.beSigned(bureaucrat1);
        form3.beSigned(bureaucrat1);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}