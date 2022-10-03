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
	std::cout << "Default " << this->type << " ice materia constructor called." << std::endl;
}

Ice::~Ice(void)
{
	std::cout << this->type << " ice destructor called." << std::endl;
}

Ice*	Ice::clone(void) const
{
	Ice *ret = new Ice(this->type);

	return (ret);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "." << std::endl;
}
