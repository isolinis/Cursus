/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:20:31 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/29 21:08:07 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	&stringREF = str;
	std::string	*stringPTR;

	stringPTR = &str;
	std::cout << "Address in memory of the string: " << &str << std::endl;
	std::cout << "Address in memory of the string using pointer: " << stringPTR << std::endl;
	std::cout << "Address in memory of the string using reference: " << &stringREF << std::endl;
	std::cout << "Content of the string using pointer: " << *stringPTR << std::endl;
	std::cout << "Content of the string using reference: " << stringREF << std::endl;
	return (0);
}
