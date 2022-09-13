/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:03:37 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/11 20:32:22 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << this->type << " constructor called to create a " << this->type << "." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << this->type << " destructor called to destroy a " << this->type << "." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof, woof, woof!" << std::endl;
}
