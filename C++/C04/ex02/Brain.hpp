/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:59:11 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 13:35:07 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

private:

	std::string	_ideas[100];

public:

	Brain(void);
	Brain(const Brain& brain);
	Brain& operator=(const Brain& brain);
	~Brain(void);

	void	setIdeas(std::string idea, int index);
	std::string	getIdeas(int index) const;
};

#endif
