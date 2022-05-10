/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:13:23 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/09 18:14:53 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	ft_main_menu ( void )
{
	std::cout << "\x1B[2J\x1B[H\n";
	std::cout << "******* WELCOME TO RETRO - CONTACTS *******" << std::endl;
}

int	ft_check_num( std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (isdigit((int)(str[i])) == 0)
			return (1);
		i++;
	}
	return (0);
}

void	ft_show_contacts( PhoneBook *p )
{
	int			index;
	std::string	selection;

	ft_main_menu();
	p->showPhoneBook();
	do
	{
		std::cin >> selection;
		index = std::atoi(selection.c_str());
	} while (ft_check_num(selection) == 1);
	if (selection == "0")
		return ;
	if (index <= p->getContent())
		p->getContact(index - 1).showContact();
	std::cin >> selection;
}

std::string	ft_read_input ( std::string str )
{
	std::string	ret;

	std::cout << "Enter contact's " << str << std::endl;
	std::getline(std::cin >> std::ws, ret);
	return (ret);
}

void	ft_create_contact ( PhoneBook *p )
{
	std::string	s;
	Contact contact;
	std::string	fname;
	std::string	lname;
	std::string	nick;
	std::string pnumber;
	std::string dsecret;

	ft_main_menu();
	fname = ft_read_input("first name: ");
	contact.setFname(fname);
	lname = ft_read_input("last name: ");
	contact.setLname(lname);
	nick = ft_read_input("nickname: ");
	contact.setNick(nick);
	do
	{
		pnumber = ft_read_input("phone number: ");
		contact.setPnumber(pnumber);
	} while (ft_check_num(pnumber) == 1);
	dsecret = ft_read_input("darkest secret: ");
	contact.setDsecret(dsecret);
	p->addContact(contact);
}

int	main ( void )
{
	std::string	selection;
	PhoneBook	ph;
	Contact		c;

	do
	{
		ft_main_menu();
		std::cout << "Choose ADD (to add a contact), SEARCH (to search the phone book) or EXIT (to finish): ";
		std::cin >> selection;
		if (selection.compare("ADD") == 0)
			ft_create_contact(&ph);
		else if (selection.compare("SEARCH") == 0)
			ft_show_contacts(&ph);
	} while (!(selection.compare("EXIT") == 0));
	return (0);
}
