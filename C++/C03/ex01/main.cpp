/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:00:55 by jsolinis          #+#    #+#             */
/*   Updated: 2022/07/05 22:15:04 by jsolinis         ###   ########.fr       */
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
	ScavTrap	st("SC4V-TP");
	ScavTrap	st1 = ScavTrap(st);
	st.attack("CL4P-TP");
	st.takeDamage(20);
	st.takeDamage(100);
	st.beRepaired(40);
	st.guardGate();
	return (0);
}
