/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:53:36 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/24 14:23:10 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("undefined")
{
	std::cout << "Default constructor called to create an " << this->type << " animal." << std::endl;
}

Animal::Animal(const Animal& animal)
{
	this->type = animal.type;
	std::cout << "Copy constructor called to create a copy of " << this->type << " animal." << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	if (this != &animal)
		this->type = animal.type;
	std::cout << "Assignation operator called to assign an animal of type " << animal.type << " animal." << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Destructor called to destroy " << this->type << " animal." << std::endl;
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Undefined animals do not make sounds." << std::endl;
}
