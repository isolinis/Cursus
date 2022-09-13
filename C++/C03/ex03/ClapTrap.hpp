/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:38:37 by jsolinis          #+#    #+#             */
/*   Updated: 2022/07/15 22:01:43 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

protected:

	std::string	name;
	int			hitpoints;
	int			energy_points;
	int			attack_damage;

public:

	ClapTrap(void);
	ClapTrap(std::string aName);
	ClapTrap(const ClapTrap& ct);
	ClapTrap& operator=(const ClapTrap& ct);
	~ClapTrap(void);

	virtual	void	attack(std::string const& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif
