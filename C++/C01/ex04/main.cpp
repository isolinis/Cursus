/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:58:51 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/02 20:24:19 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(void)
{
	std::ifstream	ifs;
	char			c;

	ifs.open("test.txt", std::ifstream::in);
	c = ifs.get();
	while(ifs.good())
	{
		std::cout << c;
		c = ifs.get();
	}
	ifs.close();
	return (0);
}
