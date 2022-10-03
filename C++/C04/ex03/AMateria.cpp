/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:16:50 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/26 19:42:56 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("undefined")
{
	std::cout << "Default " << this->type << " abstract materia constructor called." << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
	std::cout << "Parameterized " << this->type << " abstract materia constructor called." << std::endl;
}

AMateria::AMateria(const AMateria& amateria)
{
	this->type = amateria.type;
	std::cout << "Copy " << this->type << " abstract materia constructor called." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& amateria)
{
	if (this != &amateria)
		this->type = amateria.type;
	std::cout << "Assignation " << this->type << " abstract materia operator called." << std::endl;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << this->type << " abstract destructor called." << std::endl;
}

std::string const&	AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Use method in " << this->type << " abstract materia does not do anything." << std::endl;
}
