/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:45:50 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 13:12:43 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:
	Brain*	_brain;

public:
	Cat(void);
	Cat(const Cat& cat);
	Cat& operator=(const Cat& cat);
	~Cat(void);

	Brain*	getBrain(void) const;
	void	makeSound(void) const;
};

#endif
