/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:23:10 by jsolinis          #+#    #+#             */
/*   Updated: 2023/07/15 22:23:10 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char *BitcoinExchange::InvalidArguments::what() const throw()
{
    return " expected 1 argument <filename> but got ";
}

const char *BitcoinExchange::FileDoesNotExist::what() const throw()
{
	return " file does not exist => ";
}

const char *BitcoinExchange::FileHandlingFailure::what() const throw()
{
	return " failure handling infile => ";
}

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(int argc, std::string inputFilename)
{
	if (argc != 2 || inputFilename == "")
	{
        InvalidArguments ia;
        throw ia;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &be)
{
	this->_db = be._db;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &be)
{
	this->_db = be._db;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void)
{
}

std::ifstream BitcoinExchange::openFile(std::string filename) const
{
	std::ifstream infile;

	infile.open(filename, std::ios::in);
	if (!infile)
	{
		FileDoesNotExist fdne;
		throw fdne;
	}
	if (!(infile.good()))
	{
		FileHandlingFailure fhf;
		throw fhf;
	}
	return infile;
}

void BitcoinExchange::loadData(std::ifstream infile)
{
	std::string 					aux, key, value;
	int								keyAsInt;

	std::getline(infile, aux);
	while (infile.good() && std::getline(infile, aux))
	{
		std::stringstream ss(aux);
		std::stringstream ss1;
		float fvalue;

		std::getline(ss, key, ',');
		std::getline(ss, value, ' ');
		keyAsInt = this->convertKeyToInt(key);
		ss1 << value;
		ss1 >> fvalue;
		this->_db[keyAsInt] = fvalue;
	}
	infile.close();
}

void BitcoinExchange::getExchangeRate(std::string entry)
{
	std::stringstream   ss1, ss(entry);
    std::string         key, value;
	int					keyAsInt;
	float				fvalue;
	std::map<int, float>::iterator	it;

	std::getline(ss, key, '|');
	std::getline(ss, value, '|');
	if (!(this->isDateValid(key)))
	{
		std::cerr << "Error: bad input => " << key << std::endl;
		return ;
	}
	if (!(this->isValueValid(value)))
	{
		std::cerr << "Error: bad input => " << value << std::endl;
		return ;
	}
	ss1 << value;
	ss1 >> fvalue;
	if (fvalue == 0)
	{
		std::cerr << "Error: value is 0 or empty." << std::endl;
		return ;
	}
	if (fvalue < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return ;
	}
	if (fvalue > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return ;
	}
	keyAsInt = this->convertKeyToInt(key);
	it = this->_db.find(keyAsInt);
	while (it == this->_db.end())
	{
		keyAsInt--;
		it = this->_db.find(keyAsInt);
	}
	std::cout << key << "=> " << fvalue << " = " << (fvalue*it->second) << std::endl;
}

bool BitcoinExchange::isDateValid(std::string date) const
{
    std::stringstream   ss(date);
    std::stringstream   aux;
    std::string         year, month, day = "";
    int                 yearInt, monthInt, dayInt;
    bool                isValid = true;

    date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
    isValid = std::all_of(date.begin(), date.end() - 1,[](unsigned char ch){ return std::isdigit(ch); });
    std::getline(ss, year, '-');
    std::getline(ss, month, '-');
    std::getline(ss, day, ' ');
    isValid = year.length() == 4 && month.length() == 2 && day.length() == 2;
    aux << year;
    aux >> yearInt;
    aux.clear();
    aux << month;
    aux >> monthInt;
    aux.clear();
    aux << day;
    aux >> dayInt;
    isValid = yearInt > 2008 && monthInt > 0 && monthInt < 13 && dayIsValid(yearInt, monthInt, dayInt);
	if (year == "2009" && month == "01" && day == "01")
		isValid = false;
    return isValid;
}

bool    BitcoinExchange::dayIsValid(int year, int month, int day) const
{
    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        return (day > 0 && day < 31);
    case 2:
        return (year % 4 == 0 ? day > 0 && day < 30 : day > 0 && day < 29);
    default:
        return (day > 0 && day < 32);
    }
}

bool BitcoinExchange::isValueValid(std::string input) const
{
    std::string::iterator it = input.begin();
    int floating_point = 0;
    bool isValid = true;

    while (*it == '+' || *it == '-' || *it == ' ')
    {
        it++;
    }
    while (it != input.end())
    {
        if (!isdigit(*it) && *it != '.')
        {
            isValid = false;
        }
        if (*it == '.')
        {
            if (floating_point >= 1)
            {
                isValid = false;
            }
            floating_point++;
        }
        it++;
    }
    return isValid;
}

int BitcoinExchange::convertKeyToInt(std::string key) const
{
	std::stringstream	ss;
	int					keyAsInt;

    key.erase(std::remove(key.begin(), key.end(), '-'), key.end());
	ss << key;
	ss >> keyAsInt;
	return keyAsInt;
}

void BitcoinExchange::print_database(void)
{
	std::map<int, float>::iterator it;

	for (it = this->_db.begin(); it != this->_db.end(); it++)
	{
		int key = it->first;
		float value = it->second;
		std::cout << key << ": " << value << std::endl;
	}
}