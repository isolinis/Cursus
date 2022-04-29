/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:50:50 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/29 17:37:54 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

private:

	std::string _name;

public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void setName(std::string name);
	std::string getName(void);

	void announce(void);
};

#endif