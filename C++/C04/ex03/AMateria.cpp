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
}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& aMateria)
{
	this->type = aMateria.type;
}

AMateria& AMateria::operator=(const AMateria& aMateria)
{
	if (this != &aMateria) {
		this->type = aMateria.type;
	}
	return (*this);
}

AMateria::~AMateria(void)
{
}

std::string const&	AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Use method in " << this->type << " abstract materia does not do anything to " << target.getName() << "." << std::endl;
}