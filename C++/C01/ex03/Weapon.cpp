/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:35:30 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/02 18:19:34 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type)
{
	_type = type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

std::string const &Weapon::getType(void)
{
	return (_type);
}

void Weapon::toString(void)
{
	std::cout << _type;
}
