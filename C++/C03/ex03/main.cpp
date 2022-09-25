/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:00:55 by jsolinis          #+#    #+#             */
/*   Updated: 2022/07/15 22:12:58 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "====================================================================================================" << std::endl;
	std::cout << "===========================================CLAPTRAP TESTS===========================================" << std::endl;
	std::cout << "====================================================================================================" << std::endl;
	ClapTrap	ct("CL4P-TP");
	ClapTrap	ct1;
	ct1 = ct;
	ct1.attack("FL4K");
	ct1.takeDamage(4);
	ct1.takeDamage(20);
	ct1.beRepaired(10);
	std::cout << "====================================================================================================" << std::endl;
	std::cout << "===========================================SCAVTRAP TESTS===========================================" << std::endl;
	std::cout << "====================================================================================================" << std::endl;
	ScavTrap	st("SC4V-TP");
	ScavTrap	st1 = ScavTrap(st);
	st.attack("CL4P-TP");
	st.takeDamage(20);
	st.takeDamage(100);
	st.beRepaired(40);
	st.guardGate();
	std::cout << "====================================================================================================" << std::endl;
	std::cout << "===========================================FRAGTRAP TESTS===========================================" << std::endl;
	std::cout << "====================================================================================================" << std::endl;
	FragTrap	ft("FR4G-TP");
	FragTrap	ft1 = FragTrap(ft);
	ft.takeDamage(40);
	ft.takeDamage(200);
	ft.beRepaired(90);
	ft1.highFivesGuys();
	std::cout << "====================================================================================================" << std::endl;
	std::cout << "===========================================DIAMONDTRAP TESTS===========================================" << std::endl;
	std::cout << "====================================================================================================" << std::endl;
	DiamondTrap	dt("DI4M-TP");
	dt.attack("FR4G-TP");
	dt.guardGate();
	dt.highFivesGuys();
	dt.whoAmI();
	return (0);
}