/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:01:36 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/12 20:57:44 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen(void)
{
	_complains[0].level = "DEBUG";
	_complains[0].fptr = &Karen::debug;
	_complains[1].level = "INFO";
	_complains[1].fptr = &Karen::info;
	_complains[2].level = "WARNING";
	_complains[2].fptr = &Karen::warning;
	_complains[3].level = "ERROR";
	_complains[3].fptr = &Karen::error;
}
Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(_complains[i].level))
			_complains[i].Karen::(*fptr)();
	}
}
