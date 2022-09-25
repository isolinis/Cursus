/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:07:47 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/24 14:22:01 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "Wrong-Cat";
	std::cout << this->type << " constructor called to create a " << this->type << "." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << this->type << " destructor called to destroy a " << this->type << "." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow, meow, meow!" << std::endl;
}
