/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:19:34 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 16:15:48 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

protected:

	std::string	type;

public:

	Animal(void);
	Animal(const Animal& animal);
	Animal& operator=(const Animal& animal);
	virtual	~Animal(void);

	void			setType(std::string type);
	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
};

#endif
