/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:46:17 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/28 18:00:00 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook ( void )
{
	index = -1;
	content = 0;
	return ;
}

PhoneBook::~PhoneBook ( void )
{
	return ;
}

void	PhoneBook::setIndex ( int x )
{
	index = x;
}

int	PhoneBook::getIndex ( void )
{
	return ( index );
}

int	PhoneBook::getContent ( void )
{
	return ( content );
}

Contact	PhoneBook::getContact ( int i )
{
	return (contacts[i]);
}

void	PhoneBook::addContact ( Contact c )
{
	int	pos;

	if (index == -1 || index == 8)
		setIndex(0);
	pos = getIndex();
	contacts[pos].setFname ( c.getFname() );
	contacts[pos].setLname ( c.getLname() );
	contacts[pos].setNick ( c.getNick() );
	contacts[pos].setPnumber ( c.getPnumber() );
	contacts[pos].setDsecret ( c.getDsecret() );
	setIndex(pos + 1);
	if (content < 8)
		content++;

}

void	PhoneBook::showPhoneBook ( void )
{
	if (index < 0)
	{
		std::cout << "No contacts on the phonebook. Add one contact first 📞" << std::endl;
		std::cout << "Press 0 to continue.";
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10) << "Index" << "|";
		std::cout << std::setfill(' ') << std::setw(10) << "First Name" << "|";
		std::cout << std::setfill(' ') << std::setw(10) << "Last Name" << "|";
		std::cout << std::setfill(' ') << std::setw(10) << "Nickname" <<  "|" << std::endl;
		for (int i = 0; i <= content - 1; i++)
		{
			std::cout << std::right << std::setw(10) << (i + 1) << '|';
			contacts[i].toString();
			std::cout << std::endl;
		}
		std::cout << "Enter contact´s index number to expand or 0 to go back: ";
	}
}
