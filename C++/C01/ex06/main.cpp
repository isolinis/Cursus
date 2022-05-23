/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:58:36 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/12 19:01:03 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main (int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Incorrect number of arguments" << std::endl;
	else
	{
		Karen k = Karen();

		k.complain(argv[1]);
	}
	return (0);
}
