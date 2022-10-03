/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:48:06 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/03 19:20:12 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("undefined"), hitpoints(10), energy_points(10), attack_damage(0)
{
	std::cout << "Default constructor called to create a default instance." << std::endl;
}

ClapTrap::ClapTrap(std::string aName) : name(aName), hitpoints(10), energy_points(10), attack_damage(0)
{
	std::cout << "Name constructor called to construct " << this->name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	this->name = ct.name;
	this->hitpoints = ct.hitpoints;
	this->energy_points = ct.energy_points;
	this->attack_damage = ct.attack_damage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
	if (this != &ct)
	{
		this->name = ct.name;
		this->hitpoints = ct.hitpoints;
		this->energy_points = ct.energy_points;
		this->attack_damage = ct.attack_damage;
	}
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called to destroy " << this->name << "." << std::endl;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	remain_points = this->energy_points - amount;
	if (remain_points <= 0)
	{
		this->energy_points = 0;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! Its energy is depleted!!!" << std::endl;
	}
	else
	{
		this->energy_points -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! It still has " << this->energy_points << " energy points." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->energy_points += amount;
	std::cout << "ClapTrap " << this->name << " heals " << amount << " points to make a remaining " << this->energy_points << " energy points." << std::endl;
}
