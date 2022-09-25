/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:00:05 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 17:20:00 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria(void)
{
	std::cout << "Default " << this->type << " cure materia constructor called." << std::endl;
}

Cure::Cure(std::string const& type) : AMateria(type)
{
	std::cout << "Parameterized " << this->type << " cure materia constructor called." << std::endl;
}

Cure::~Cure(void)
{
	std::cout << this-type << " cure materia destructor called." << std::endl;
}

Cure*	Cure::clone(void) const
{
	Cure *ret = new Cure(this->type);

	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds." << std::endl;
}
