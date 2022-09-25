/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:41:40 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 14:00:30 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal *animal_array[20];

	for (int i=0; i<=19; i++)
	{
		if (i < 10)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	for (int i=0; i<=19; i++)
	{
		delete animal_array[i];
	}

	std::cout << "==================================================" << std::endl;
	Cat cat1;
    Cat cat2;
	Animal* meta = new Cat();

    cat1.getBrain()->setIdeas("Where did they move the fish bowl?", 0);
    std::cout << cat1.getBrain()->getIdeas(0) << std::endl;
    cat2 = cat1;

	std::cout << meta->getType() << std::endl;

    std::cout << cat2.getBrain()->getIdeas(0) << std::endl;

    cat1.getBrain()->setIdeas("Meow!", 0);

    std::cout << cat2.getBrain()->getIdeas(0) << std::endl;
    std::cout << cat1.getBrain()->getIdeas(0) << std::endl;
}
