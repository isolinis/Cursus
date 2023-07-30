/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:30:07 by jsolinis          #+#    #+#             */
/*   Updated: 2023/07/15 16:30:07 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ostream>
#include <map>
#include <iterator>
#include <algorithm>

class BitcoinExchange {

private:

	std::map<int, float> _db;
	class InvalidArguments : public std::exception
    {
        virtual const char* what() const throw();
    };
	class FileDoesNotExist : public std::exception
    {
        virtual const char* what() const throw();
    };
	class FileHandlingFailure : public std::exception
    {
        virtual const char* what() const throw();
    };
	BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange& be);
	BitcoinExchange& operator=(const BitcoinExchange& be);

public:
	BitcoinExchange(int argc, std::string inputFilename);
	~BitcoinExchange(void);

	std::ifstream	openFile(std::string filename) const;
	void			loadData(std::ifstream infile);
	void			getExchangeRate(std::string entry);
	bool 			isDateValid(std::string date) const;
	bool			dayIsValid(int year, int month, int day) const;
	bool			isValueValid(std::string input) const;
	int				convertKeyToInt(std::string key) const;
	void			print_database(void);
};

#endif