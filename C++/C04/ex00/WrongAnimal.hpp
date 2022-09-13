/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:19:34 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/11 20:43:24 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

protected:

	std::string	type;

public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& wrongAnimal);
	WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
	~WrongAnimal(void);

	void			setType(std::string type);
	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif
