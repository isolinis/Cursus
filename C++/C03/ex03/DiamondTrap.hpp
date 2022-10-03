/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:20:36 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/03 20:10:53 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string _name;

	public:

		DiamondTrap(void);
		DiamondTrap(std::string aName);
		DiamondTrap(const DiamondTrap& dt);
		DiamondTrap& operator=(const DiamondTrap& dt);
		~DiamondTrap(void);

		int		get_hitpoints(void) const;
		int		get_energy_points(void) const;
		int		get_attack_damage(void) const;

		void	attack(std::string const& target);
		void	whoAmI(void);
};

#endif
