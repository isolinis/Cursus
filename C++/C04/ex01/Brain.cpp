/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:18:09 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 13:36:37 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Default Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	std::cout << "Copy Brain constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = brain._ideas[i];
	}
	std::cout << "Brain assignation operator called." << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called to destroy a brain." << std::endl;
}

void	Brain::setIdeas(std::string idea, int index)
{
	this->_ideas[index] = idea;
}

std::string	Brain::getIdeas(int	index) const
{
	return (this->_ideas[index]);
}
