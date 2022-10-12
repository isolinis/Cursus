/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:44:09 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/26 19:47:32 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice& anIce)
{
	this->type = anIce.type;
}

Ice& Ice::operator=(const Ice& anIce)
{
	if (this != &anIce)
		this->type = anIce.type;
	return (*this);
}

Ice::~Ice(void)
{
}

Ice*	Ice::clone(void) const
{
	Ice *ret = new Ice();

	return (ret);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "." << std::endl;
}