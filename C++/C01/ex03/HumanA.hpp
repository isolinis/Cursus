/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:01:27 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/29 21:17:39 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {

private:

	std::string _name;
	Weapon		_weapon;

public:

	HumanA(std::string name, Weapon weapon);
	~HumanA(void);

	void setName(std::string name);
	std::string getName(void);
	void setWeapon(Weapon &weapon);
	Weapon getWeapon(void);

	void attack(void);
};

#endif
