/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:46:32 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/28 17:35:51 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_strlen(char *arg)
{
	int	i = 0;

	while (arg[i])
		i++;
	return (i);
}

void	ft_toUpper (char c)
{
	if (c >= 'a' && c <= 'z')
	   std::cout << (char)(c - 32);
	else
		std::cout << c;
}

int	main (int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; j < ft_strlen(argv[i]); j++)
				ft_toUpper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
