/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:07:47 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/13 17:45:35 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << this->type << " constructor called to create a " << this->type << "." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << this->type << " destructor called to destroy a " << this->type << "." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow, meow, meow!" << std::endl;
}
