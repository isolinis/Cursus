/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:03:37 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 13:21:59 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << this->type << " constructor called to create a " << this->type << "." << std::endl;
}

Dog::Dog(const Dog& dog)
{
	this->type = dog.type;
	this->_brain = new Brain(*dog._brain);
	std::cout << this->type << " copy constructor called to create a copy of another " << this->type << "." << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		this->type = dog.type;
		this->_brain = new Brain(*dog._brain);
	}
	std::cout << this->type << " assignation operator called to assign another " << this->type << "." << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete(this->_brain);
	std::cout << this->type << " destructor called to destroy a " << this->type << "." << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof, woof, woof!" << std::endl;
}
