/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:57:05 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 16:59:58 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure(void);
	Cure(std::string const& type);
	~Cure(void);

	virtual Cure*	clone(void) const;
	virtual void	use(ICharacter& target);
};

#endif
