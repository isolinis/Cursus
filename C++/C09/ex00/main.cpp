/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:04:23 by jsolinis          #+#    #+#             */
/*   Updated: 2023/06/25 21:04:23 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	try
	{
		BitcoinExchange exchange = BitcoinExchange(argc, argv[1]);
		std::ifstream infile = exchange.openFile(argv[1]);
		std::string aux;
		exchange.loadData(exchange.openFile("data.csv"));
		std::getline(infile, aux);
		while (infile.good() && std::getline(infile, aux))
		{
			exchange.getExchangeRate(aux);
		}
		infile.close();
	}
	catch(std::logic_error& e)
	{
		std::cerr << "Error: expected 1 argument <filename> but got 0." << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::string errorMsg = e.what();
		size_t not_found = -1;
		if (errorMsg.find("expected") != not_found)
			std::cerr << "Error: " << e.what() << (argc - 1 == 1 ? 0 : argc - 1) << ".";
		if (errorMsg.find("exist") != not_found)
			std::cerr << "Error: " << e.what() << argv[1];
		if (errorMsg.find("bad") != not_found)
			std::cerr << e.what();
		std::cerr << std::endl;
	}
	return (0);
}