/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:36:03 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/11 14:30:48 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string aName) : ClapTrap(aName + "_clap_name"), _name(aName)
{
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "Default DiamondTrap constructor called to construct " << this->name << "." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called to destroy " << this->name << "." << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
	std::cout << "Attacked by DiamondTrap." << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " & my ClapTrap name is " << ClapTrap::name << std::endl;
}
