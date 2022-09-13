/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:00:55 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/11 13:44:55 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "===========================================CLAPTRAP TESTS===========================================" << std::endl;
	ClapTrap	ct("CL4P-TP");
	ClapTrap	ct1 = ClapTrap(ct);
	ct.attack("FL4K");
	ct.takeDamage(4);
	ct.takeDamage(20);
	ct.beRepaired(10);
	std::cout << "===========================================SCAVTRAP TESTS===========================================" << std::endl;
	ScavTrap	st;
	ScavTrap	st1("SC4V-TP");
	ScavTrap	st2 = ScavTrap(st1);
	st.attack("CL4P-TP");
	st.takeDamage(20);
	st1.takeDamage(100);
	st.beRepaired(40);
	st2.guardGate();
	return (0);
}
