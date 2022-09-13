/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:00:55 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/11 14:11:00 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "===========================================CLAPTRAP TESTS===========================================" << std::endl;
	ClapTrap	ct;
	ClapTrap	ct1("CL4P-TP");
	ClapTrap	ct2 = ClapTrap(ct1);
	ct.attack("FL4K");
	ct1.takeDamage(4);
	ct.takeDamage(20);
	ct2.beRepaired(10);
	std::cout << "===========================================SCAVTRAP TESTS===========================================" << std::endl;
	ScavTrap	st;
	ScavTrap	st1("SC4V-TP");
	ScavTrap	st2 = ScavTrap(st1);
	st.attack("SC4V-TP");
	st1.takeDamage(20);
	st.takeDamage(100);
	st.beRepaired(40);
	st2.guardGate();
	std::cout << "===========================================FRAGTRAP TESTS===========================================" << std::endl;
	FragTrap	ft;
	FragTrap	ft1("FR4G-TP");
	FragTrap	ft2 = FragTrap(ft1);
	ft.attack("FR4G-TP");
	ft1.takeDamage(40);
	ft.takeDamage(200);
	ft.beRepaired(90);
	ft2.highFivesGuys();
	return (0);
}
