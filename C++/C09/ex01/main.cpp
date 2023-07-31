/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:38:49 by jsolinis          #+#    #+#             */
/*   Updated: 2023/07/31 02:45:11 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    try
    {
        RPN rpn = RPN(argc, argv[1]);
        std::string input = rpn.validateInput(argv[1]);
        int result = rpn.evaluate_polish_expression(input);
        std::cout << result << std::endl;
    }
    catch(std::logic_error& e)
	{
		std::cerr << "Error: expected 1 argument but got 0." << std::endl; 
	}
    catch(const std::exception& e)
    {
        std::string errorMsg = e.what();
		size_t not_found = -1;
		if (errorMsg.find("expected") != not_found)
			std::cerr << "Error: " << e.what() << (argc - 1 == 1 ? 0 : argc - 1) << ".";
        else
            std::cerr << "Error: " << e.what();
        std::cerr << std::endl;
    }

    return (0);
}