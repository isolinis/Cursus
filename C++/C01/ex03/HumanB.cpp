/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:21:06 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/29 21:18:26 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
	_name = name;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::setName(std::string name)
{
	_name = name;
}

std::string HumanB::getName(void)
{
	return (_name);
}

void HumanB::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}

Weapon HumanB::getWeapon(void)
{
	return (_weapon);
}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with his ";
	_weapon.toString();
	std::cout << std::endl;
}
