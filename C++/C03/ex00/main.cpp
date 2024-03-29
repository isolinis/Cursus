/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:00:55 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/11 13:36:58 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct;
	ClapTrap	ct1("CL4P-TP");
	ClapTrap	ct2 = ClapTrap(ct1);
	ct.attack("FL4K");
	ct1.takeDamage(4);
	ct.takeDamage(20);
	ct2.beRepaired(10);
	return (0);
}
