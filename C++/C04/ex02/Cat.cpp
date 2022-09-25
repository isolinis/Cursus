/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:07:47 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 13:41:27 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << this->type << " default constructor called to create a " << this->type << "." << std::endl;
}

Cat::Cat(const Cat& cat)
{
	this->type = cat.type;
	this->_brain = new Brain(*cat._brain);
	std::cout << this->type << " copy constructor called to copy a " << this->type << "." << std::endl;
}

Cat&	Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		this->type = cat.type;
		this->_brain = new Brain(*cat._brain);
	}
	std::cout << this->type << " assignation operator called to assign a " << this->type << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete(this->_brain);
	std::cout << this->type << " destructor called to destroy a " << this->type << "." << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow, meow, meow!" << std::endl;
}
