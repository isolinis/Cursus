/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:36:03 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/03 20:12:27 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string aName) : ClapTrap(aName + "_clap_name"), name(aName)
{
	this->energy_points = ScavTrap::energy_points;
	std::cout << "Parameterized DiamondTrap constructor called to construct " << this->name << "." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt)
{
	ClapTrap::name = dt.name + "_clap_name";
	this->name = dt.name;
	this->hitpoints = dt.get_hitpoints();
	this->energy_points = dt.get_energy_points();
	this->attack_damage = dt.get_attack_damage();
	std::cout << "Copy DiamondTrap constructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& dt)
{
	if (this != &dt)
	{
		ClapTrap::name = dt.name + "_clap_name";
		this->name = dt.name;
		this->hitpoints = dt.get_hitpoints();
		this->energy_points = dt.get_energy_points();
		this->attack_damage = dt.get_attack_damage();
	}
	std::cout << "DiamondTrap assignation operator called." << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called to destroy " << this->name << "." << std::endl;
}

int	DiamondTrap::get_hitpoints(void) const
{
	return (this->hitpoints);
}

int	DiamondTrap::get_energy_points(void) const
{
	return (this->energy_points);
}

int	DiamondTrap::get_attack_damage(void) const
{
	return (this->attack_damage);
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
	std::cout << "Attacked by DiamondTrap." << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->name << " & my ClapTrap name is " << ClapTrap::name << std::endl;
}
