/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:40:16 by jsolinis          #+#    #+#             */
/*   Updated: 2022/07/05 22:46:51 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string aName) : ClapTrap(aName)
{
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Default FragTrap constructor called to construct " << aName << "." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called to destroy " << this->name << "." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Guys! Give me those high fives!" << std::endl;
}
