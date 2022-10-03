/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:04:13 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/03 19:45:13 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string aName);
	ScavTrap(const ScavTrap& st);
	ScavTrap& operator=(const ScavTrap& st);
	~ScavTrap(void);

	void	attack(std::string const& target);
	void	guardGate(void);
};

#endif
