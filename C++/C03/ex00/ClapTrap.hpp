/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:38:37 by jsolinis          #+#    #+#             */
/*   Updated: 2022/07/15 21:08:53 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

private:

	std::string	_name;
	int			_hitpoints;
	int			_energy_points;
	int			_attack_damage;

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ct);
	ClapTrap& operator=(const ClapTrap& ct);
	~ClapTrap(void);

	void	attack(std::string const& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
