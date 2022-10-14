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
    Bureaucrat bureaucrat1("Tony");
    Bureaucrat bureaucrat2("Malony");
    Bureaucrat bureaucrat3;
    Bureaucrat bureaucrat4("Siobhan", 10000);

    std::cout << bureaucrat4 << std::endl;
    bureaucrat3 = bureaucrat1;

    bureaucrat1 = bureaucrat2;
    std::cout << bureaucrat1 << std::endl;
    bureaucrat1.decrement();
    std::cout << bureaucrat1 << std::endl;
    bureaucrat1.increment();
    for (int i = 0; i < 149; i++)
    {
        bureaucrat1.increment();
        std::cout << bureaucrat1 << std::endl;
    }
    return (0);
}