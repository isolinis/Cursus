/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:48:06 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/11 13:29:00 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("undefined"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called to construct a default instance." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Parameterized constructor called to construct " << name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	this->_name = ct._name;
	this->_hitpoints = ct._hitpoints;
	this->_energy_points = ct._energy_points;
	this->_attack_damage = ct._attack_damage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
	if (this != &ct)
	{
		this->_name = ct._name;
		this->_hitpoints = ct._hitpoints;
		this->_energy_points = ct._energy_points;
		this->_attack_damage = ct._attack_damage;
	}
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called to destroy " << this->_name << "." << std::endl;
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	remain_points = this->_energy_points - amount;
	if (remain_points <= 0)
	{
		this->_energy_points = 0;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! Its energy is depleted!!!" << std::endl;
	}
	else
	{
		this->_energy_points -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! It still has " << this->_energy_points << " energy points." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_energy_points += amount;
	std::cout << "ClapTrap " << this->_name << " heals " << amount << " points to make a remaining " << this->_energy_points << " energy points." << std::endl;
}
