/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:28:41 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 13:11:54 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:
	Brain*	_brain;

public:
	Dog(void);
	Dog(const Dog& dog);
	Dog& operator=(const Dog& dog);
	~Dog(void);
	
	Brain*	getBrain(void) const;
	void	makeSound(void) const;
};

#endif
