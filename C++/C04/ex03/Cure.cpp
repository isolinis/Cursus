/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:00:05 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/11 20:03:21 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{	
}

Cure::Cure(const Cure& aCure)
{
	this->type = aCure.type;
}

Cure& Cure::operator=(const Cure& aCure)
{
	if (this != &aCure)
		this->type = aCure.type;
	return (*this);
}

Cure::~Cure(void)
{
}

Cure*	Cure::clone(void) const
{
	Cure *ret = new Cure();

	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds." << std::endl;
}