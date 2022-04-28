/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:17:08 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/28 17:56:21 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact ( void )
{
	return ;
}

Contact::~Contact ( void )
{
	return ;
}

void	Contact::setFname ( std::string fname )
{
	first_name = fname;
}

void	Contact::setLname ( std::string lname )
{
	last_name = lname;
}

void	Contact::setNick ( std::string nick )
{
	nickname = nick;
}

void	Contact::setPnumber ( std::string pnumber )
{
	phone_number = pnumber;
}

void	Contact::setDsecret ( std::string dsecret )
{
	darkest_secret = dsecret;
}

std::string	Contact::getFname ( void )
{
	return ( first_name );
}

std::string	Contact::getLname ( void )
{
	return ( last_name );
}

std::string	Contact::getNick ( void )
{
	return ( nickname );
}

std::string	Contact::getPnumber ( void )
{
	return ( phone_number );
}

std::string	Contact::getDsecret ( void )
{
	return ( darkest_secret );
}

void	Contact::toString ( void )
{
	if (first_name.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) << first_name.substr(0, 9).append(".") << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << first_name << '|';
	if (last_name.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) << last_name.substr(0, 9).append(".") << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << last_name << '|';
	if (nickname.length() > 10)
		std::cout << std::setfill(' ') << std::setw(10) << nickname.substr(0, 9).append(".") << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << nickname << '|';
}

void	Contact::showContact ( void )
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
