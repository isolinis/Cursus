/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:29:15 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/03 19:43:30 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string aName);
	FragTrap(const FragTrap& ft);
	FragTrap& operator=(const FragTrap& ft);
	~FragTrap(void);

	void	highFivesGuys(void);
};

#endif
