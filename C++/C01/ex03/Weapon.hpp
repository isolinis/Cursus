/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:37:03 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/29 20:40:17 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon{

private:

	std::string _type;

public:

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	void setType(std::string type);
	std::string getType(void);

	void toString(void);
};

#endif
