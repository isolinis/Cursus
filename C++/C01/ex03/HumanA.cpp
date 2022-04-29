/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:09:58 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/29 21:17:23 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon weapon)
{
	_name = name;
	_weapon = weapon;
	return ;
}

HumanA::~HumanA (void)
{
	return ;
}

void HumanA::setName(std::string name)
{
	_name = name;
}

std::string HumanA::getName(void)
{
	return (_name);
}

void HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

Weapon HumanA::getWeapon(void)
{
	return (_weapon);
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with his ";
	_weapon.toString();
	std::cout << std::endl;
}
