/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:00:55 by jsolinis          #+#    #+#             */
/*   Updated: 2022/07/05 22:53:58 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	ScavTrap	st("SC4V-TP");
	ScavTrap	st1 = ScavTrap(st);
	st.attack("CL4P-TP");
	st.takeDamage(20);
	st.takeDamage(100);
	st.beRepaired(40);
	st.guardGate();
	std::cout << "===========================================FRAGTRAP TESTS===========================================" << std::endl;
	FragTrap	ft("FR4G-TP");
	FragTrap	ft1 = FragTrap(ft);
	ft.takeDamage(40);
	ft.takeDamage(200);
	ft.beRepaired(90);
	ft1.highFivesGuys();
	return (0);
}
