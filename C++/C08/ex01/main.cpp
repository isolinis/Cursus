/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:07:51 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/31 12:52:33 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
    try
    {
        Span sp = Span(10000);

        sp.addNumbersRange();
        for (int i = 0; i < sp.size(); i++)
        {
            std::cout << sp[i] << " - ";
        }
        std::cout << std::endl;

        std::cout << "Shortest span within Span is " << sp.shortestSpan() << "." << std::endl;
        std::cout << "Longtest span within Span is " << sp.longestSpan() << "." << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}