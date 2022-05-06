/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:58:51 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/06 23:23:12 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		file_name;
	std::string		aux;
	int				len;

	if (argc != 4)
	{
		std::cerr << "Incorrect number of arguments";
		exit (1);
	}
	else
	{
		infile.open(argv[1], std::ios::in);
		if (!infile)
		{
			std::cerr << "File does not exist";
			exit (1);
		}	
		if (!(infile.good()))
		{
			std::cerr << "Erorr handling infile";
			exit (1);
		}
		file_name = argv[1];
		file_name.append(".replace");
		len = strlen(argv[2]);
		outfile.open(file_name, std::ios::trunc);
		while(infile.good())
		{
			std::getline(infile, aux, ' ');
			if (aux.compare(argv[2]) == 0)
				outfile << argv[3] << ' ';
			else
				outfile << aux << ' ';
		}
		infile.close();
		outfile.close();
	}
	return (0);
}
