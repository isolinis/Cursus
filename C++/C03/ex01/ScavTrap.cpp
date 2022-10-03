/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:28:56 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/03 19:00:05 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Default ScavTrap constructor called to create a default instance." << std::endl;
}

ScavTrap::ScavTrap(std::string aName) : ClapTrap(aName)
{
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Parameterized ScavTrap constructor called to construct " << aName << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st)
{
	this->name = st.name;
	this->hitpoints = st.hitpoints;
	this->energy_points = st.energy_points;
	this->attack_damage = st.attack_damage;
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st)
{
	if (this != &st)
	{
		this->name = st.name;
		this->hitpoints = st.hitpoints;
		this->energy_points = st.energy_points;
		this->attack_damage = st.attack_damage;
	}
	std::cout << "ScavTrap assignation operator called." << std::endl;
	return (*this);
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
