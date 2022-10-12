/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:57:05 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/11 20:03:44 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure(void);
	Cure(const Cure& aCure);
	Cure& operator=(const Cure& aCure);
	~Cure(void);

	virtual Cure*	clone(void) const;
	virtual void	use(ICharacter& target);
};

#endif
