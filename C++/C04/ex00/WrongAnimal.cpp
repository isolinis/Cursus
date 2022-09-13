/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:53:36 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/11 21:37:10 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("wrong-undefined")
{
	std::cout << "Default constructor called to create an " << this->type << " wrong animal." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
	this->type = wrongAnimal.type;
	std::cout << "Copy constructor called to create a copy of " << this->type << " wrong animal." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
	if (this != &wrongAnimal)
		this->type = wrongAnimal.type;
	std::cout << "Assignation operator called to assign a wrong animal of type " << wrongAnimal.type << " wrong animal." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called to destroy " << this->type << " wrong animal." << std::endl;
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Undefined animals do not make sounds." << std::endl;
}
