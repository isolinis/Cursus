/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:51:27 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/11 20:50:09 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const	Animal* meta = new Animal();
	const	WrongAnimal* wrongMeta = new WrongAnimal();
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	const	WrongCat* k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "=====================WRONGCAT=================" << std::endl;
	k->makeSound();
	wrongMeta->makeSound();
}
