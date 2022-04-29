/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:06:53 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/29 21:18:11 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {

private:

	std::string _name;
	Weapon		_weapon;

public:

	HumanB(std::string name);
	~HumanB(void);

	void setName(std::string name);
	std::string getName(void);
	void setWeapon(Weapon weapon);
	Weapon getWeapon(void);

	void attack(void);
};

#endif
