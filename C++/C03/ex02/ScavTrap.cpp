/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:28:56 by jsolinis          #+#    #+#             */
/*   Updated: 2022/07/05 21:55:50 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string aName) : ClapTrap(aName)
{
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Default ScavTrap constructor called to construct " << aName << "." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called to destroy " << this->name << "." << std::endl;
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " enters Gate keeper mode!" << std::endl;
}
