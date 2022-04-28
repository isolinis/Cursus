/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:55:49 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/28 19:00:29 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name);

int main(void)
{
	Zombie *zombie = ZombieHorde(8, "Ion");
	for (int i = 0; i < 8; i++)
		(zombie + i)->announce();
	delete[] zombie;
	return (0);
}
